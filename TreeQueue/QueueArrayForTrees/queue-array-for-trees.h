#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

#include <iostream>
#include "../TreeNode/tree-node.h"
template <typename T>
class MyQueueArray
{
    T size;
    T front;
    T rear;
    MyTreeNode<T> **q;

public:
    MyQueueArray(int queueSize);
    void display();
    void enqueue(T value);
    T dequeue();
    bool isEmpty();
    bool isFull();
    void peek();
};

#endif
