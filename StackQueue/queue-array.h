#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

#include <iostream>

class MyQueueArray
{
    int size;
    int front;
    int rear;
    int *s;

public:
    MyQueueArray(int queueSize);
    void display();
    void enqueue(int value);
    int dequeue();
    bool isEmpty();
    bool isFull();
    void peek();
};

#endif
