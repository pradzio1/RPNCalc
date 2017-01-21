//
// Created by radix on 2017-01-19.
//

#ifndef RPNCALC_MULTIPLYOPERATORCOMMAND_H
#define RPNCALC_MULTIPLYOPERATORCOMMAND_H

#include "Command.h"

class MultiplyOperatorCommand: public Command {
    virtual void execute(std::stack <double> &);
};


#endif //RPNCALC_MULTIPLYOPERATORCOMMAND_H
