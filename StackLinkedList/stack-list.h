#ifndef STACKLIST_H
#define STACKLIST_H

#include <iostream>
#include "../Node/node.h"

template <typename T>
class MyStackList
{
    Node<T> *top;

public:
    MyStackList();
    void display();
    void push(T value);
    T pop();
    bool isEmpty();
    T peek();
    void clear();
};

#endif
