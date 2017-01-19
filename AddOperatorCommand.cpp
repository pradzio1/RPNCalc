//
// Created by radix on 2017-01-19.
//

#include "AddOperatorCommand.h"
void AddOperatorCommand::execute(std::stack<int> &s) {
    int x1=s.top();
    s.pop();
    int x2=s.top();
    s.pop();
    s.push(x2+x1);
}