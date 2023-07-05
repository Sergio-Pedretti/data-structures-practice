#ifndef STACKARRAY_H
#define STACKARRAY_H

#include <iostream>

class MyStackArray
{
    int size;
    int top;
    int *s;

public:
    MyStackArray(int stackSize);
    void display();
    void push(int value);
    int pop();
};

#endif
