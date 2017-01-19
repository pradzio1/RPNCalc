#include <iostream>
#include "Command.h"
#include "DivideOperatorCommand.h"
#include "SubtractOperatorCommand.h"
#include "AddOperatorCommand.h"
#include "MultiplyOperatorCommand.h"
#include "PushNumberCommand.h"

Command *createCommand(char c) {
    if(c=='/'||c==':')
        return new DivideOperatorCommand();
    else if(c=='-')
        return new SubtractOperatorCommand();
    else if(c=='+')
        return new AddOperatorCommand();
    else if(c=='*'||c=='x')
        return new MultiplyOperatorCommand();
    else if(std::isdigit(c))
        return new PushNumberCommand(c-48);
    else
        return NULL;
//    TODO Exception handling
}
int main() {
    std::stack <int> operationStack;
    char choice;
    Command *command;
    while(true){
        std::cin>>choice;
        if (choice=='c')
            break;
        else {
            command = createCommand(choice);
            command->execute(operationStack);
        }
    }
//    TODO Stack display
    return 0;
}
