#ifndef CIRCULARQUEUEARRAY_H
#define CIRCULARQUEUEARRAY_H

#include <iostream>

class MyCircularQueueArray
{
    int size;
    int front;
    int rear;
    int *q;

public:
    MyCircularQueueArray(int queueSize);
    void display();
    void enqueue(int value);
    int dequeue();
    bool isEmpty();
    bool isFull();
    void peek();
    ~MyCircularQueueArray();
};

#endif
