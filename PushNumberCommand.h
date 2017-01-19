//
// Created by radix on 2017-01-19.
//

#ifndef RPNCALC_PUSHNUMBERCOMMAND_H
#define RPNCALC_PUSHNUMBERCOMMAND_H

#include "Command.h"
class PushNumberCommand : public Command {
    int var;
public:
    PushNumberCommand(int);
    virtual void execute(std::stack <int> &);
};


#endif //RPNCALC_PUSHNUMBERCOMMAND_H
