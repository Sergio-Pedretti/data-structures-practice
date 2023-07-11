#ifndef STACKLIST_H
#define STACKLIST_H

#include <iostream>
#include "../Node/node.h"

class MyStackList
{
    Node *top;

public:
    MyStackList();
    void display();
    void push(int value);
    int pop();
    bool isEmpty();
    char peek();
    void clear();
};

#endif
