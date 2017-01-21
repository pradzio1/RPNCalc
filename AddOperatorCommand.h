//
// Created by radix on 2017-01-19.
//

#ifndef RPNCALC_ADDOPERATORCOMMAND_H
#define RPNCALC_ADDOPERATORCOMMAND_H

#include "Command.h"

class AddOperatorCommand: public Command {
    virtual void execute(std::stack <double> &);
};


#endif //RPNCALC_ADDOPERATORCOMMAND_H
