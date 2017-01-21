//
// Created by radix on 2017-01-19.
//

#ifndef RPNCALC_COMMAND_H
#define RPNCALC_COMMAND_H
#include <stack>

class Command {
public:
    virtual void execute(std::stack <double> &)=0;

};


#endif //RPNCALC_COMMAND_H
