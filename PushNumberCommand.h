//
// Created by radix on 2017-01-19.
//

#ifndef RPNCALC_PUSHNUMBERCOMMAND_H
#define RPNCALC_PUSHNUMBERCOMMAND_H

#include "Command.h"
class PushNumberCommand : public Command {
    double var;
public:
    PushNumberCommand(double);
    virtual void execute(std::stack <double> &);
};


#endif //RPNCALC_PUSHNUMBERCOMMAND_H
