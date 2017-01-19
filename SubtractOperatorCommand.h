//
// Created by radix on 2017-01-19.
//

#ifndef RPNCALC_SUBTRACTOPERATORCOMMAND_H
#define RPNCALC_SUBTRACTOPERATORCOMMAND_H


#include "Command.h"

class SubtractOperatorCommand: public Command  {
    virtual void execute(std::stack <int> &);
};


#endif //RPNCALC_SUBTRACTOPERATORCOMMAND_H
