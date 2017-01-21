//
// Created by radix on 2017-01-19.
//

#include "PushNumberCommand.h"
PushNumberCommand::PushNumberCommand(double x){
        var=x;
}
void PushNumberCommand::execute(std::stack<double> &s) {
    s.push(var);
}