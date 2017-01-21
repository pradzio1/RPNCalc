//
// Created by radix on 2017-01-19.
//

#include "DivideOperatorCommand.h"


void DivideOperatorCommand::execute(std::stack<double> &s) {
    double x1, x2;
    if(s.size()>=2) {
        x1 = s.top();
        s.pop();
        x2 = s.top();
        s.pop();
        if (x1 == 0) {
            s.push(x2);
            s.push(x1);
            throw OperationException(OperationException::DIV_BY_ZERO);
        }
        s.push(x2 / x1);
    }
    else{
        throw OperationException(OperationException::NOT_ENOUGH_ARGUMENTS);
    }
}