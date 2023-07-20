#ifndef QUEUELINKEDLIST_H
#define QUEUELINKEDLIST_H

#include <iostream>
#include "../Node/node.h"
template <typename T>
class MyQueueLinkedList
{
    Node<T> *front;
    Node<T> *rear;

public:
    MyQueueLinkedList();
    void display();
    void enqueue(T value);
    T dequeue();
    bool isEmpty();
    void peek();
};

#endif
