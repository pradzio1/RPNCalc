//
// Created by radix on 2017-01-19.
//

#include "PushNumberCommand.h"
PushNumberCommand::PushNumberCommand(int x){
        var=x;
}
void PushNumberCommand::execute(std::stack<int> &s) {
    s.push(var);
}