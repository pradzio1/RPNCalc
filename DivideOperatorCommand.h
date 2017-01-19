//
// Created by radix on 2017-01-19.
//

#ifndef RPNCALC_DIVIDEOPERATORCOMMAND_H
#define RPNCALC_DIVIDEOPERATORCOMMAND_H


#include "Command.h"

class DivideOperatorCommand: public Command  {
    virtual void execute(std::stack <int> &);
};


#endif //RPNCALC_DIVIDEOPERATORCOMMAND_H
