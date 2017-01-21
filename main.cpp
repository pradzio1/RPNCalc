#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "Command.h"
#include "DivideOperatorCommand.h"
#include "SubtractOperatorCommand.h"
#include "AddOperatorCommand.h"
#include "MultiplyOperatorCommand.h"
#include "PushNumberCommand.h"

void showStack(std::stack<double>);

bool isValid(std::string &);

Command *createCommand(std::string);

void Greeter();


int main() {
    Greeter();
    std::stack<double> operationStack;
    std::string input;
    Command *command;
    while (true) {
        std::cin >> input;
        if (input == "c")
            break;
        else {
            try {
                command = createCommand(input);
            }
            catch (OperationException exc) {
                exc.what();
                command = NULL;
            }
            if (command)
                try {
                    command->execute(operationStack);
                }
                catch (OperationException exc) {
                    exc.what();
                }
        }
        showStack(operationStack);
    }
    return 0;
}

void showStack(std::stack<double> s) {
    while (!s.empty()) {
        std::cout << "> " << s.top() << std::endl;
        s.pop();
    }
}

bool isValid(std::string &x) {
    int inputSize = x.size();
    int dotcount = 0;
    if (inputSize == 1)
        return (x == "+" || x == "-" || x == "*" || x == "/" || x == "x" || x == ":" || isdigit(x[0]));
    else {
        for (int i = 0; i < inputSize; ++i) {
            if (x[i] == '.')
                dotcount++;
            if (x[i] == ',') {
                x[i] = '.';
                dotcount++;
            }
            if (dotcount >= 1)
                return false;
            if (x[i] != '.' && !isdigit(x[i]))
                return false;
        }
        return dotcount <= 1;
    }
}

Command *createCommand(std::string c) {
    double num;
    isValid(c);
    num = atof(c.c_str());
    if (c == "/" || c == ":")
        return new DivideOperatorCommand();
    else if (c == "-")
        return new SubtractOperatorCommand();
    else if (c == "+")
        return new AddOperatorCommand();
    else if (c == "*" || c == "x")
        return new MultiplyOperatorCommand();
    else if (isValid(c))
        return new PushNumberCommand(num);
    else
        throw OperationException(OperationException::INVALID_ARGUMENT);
}

void Greeter() {
    std::cout
            << "Welcome to RPNCalc\nRPNCalc is basic calculator\nusing Reversed Polish Notation\n\nTo start just type number or operator\nand press Enter\n\nEnter \"c\" to quit\n";
}
