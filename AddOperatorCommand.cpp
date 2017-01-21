//
// Created by radix on 2017-01-19.
//

#include "AddOperatorCommand.h"
#include "OperationException.h"

void AddOperatorCommand::execute(std::stack<double> &s) {
    if(s.size()>=2) {
        double x1 = s.top();
        s.pop();
        double x2 = s.top();
        s.pop();
        s.push(x2 + x1);
    }
    else{
        throw OperationException(OperationException::NOT_ENOUGH_ARGUMENTS);
    }
}