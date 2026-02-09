#ifndef STACK_H
#define STACK_H
#include "stacknode.h"

class Stack
{
public:
    Stack();

    StackNode* top;

    // operations
    void push(int value);
    int pop();
    int peek();
    void print();
};

#endif // STACK_H
