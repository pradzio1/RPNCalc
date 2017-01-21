//
// Created by radix on 2017-01-21.
//

#ifndef RPNCALC_DIVIDEDBYZEROEXCEPTION_H
#define RPNCALC_DIVIDEDBYZEROEXCEPTION_H

#include <string>
#include <exception>

class OperationException : std::exception {
private:
    std::string message;
public:
    enum ERR_TYPE {DIV_BY_ZERO, NOT_ENOUGH_ARGUMENTS};
    OperationException(ERR_TYPE exceptionType);
    virtual void what();
};


#endif //RPNCALC_DIVIDEDBYZEROEXCEPTION_H
