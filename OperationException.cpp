//
// Created by radix on 2017-01-21.
//

#include <iostream>
#include "OperationException.h"
void OperationException::what() {
    std::cout << message <<std::endl;
}
OperationException::OperationException(ERR_TYPE exceptionType) {
    switch (exceptionType){
        case DIV_BY_ZERO:
            message="Division by zero is forbidden!";
            break;
        case NOT_ENOUGH_ARGUMENTS:
            message="Not enough arguments for this operation, please enter a number";
            break;
        case INVALID_ARGUMENT:
            message="Invalid argument, please enter valid number or operator";
            break;
        default:
            message="Unknown type exception";
            break;
    }
}