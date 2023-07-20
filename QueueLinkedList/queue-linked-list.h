#ifndef QUEUELINKEDLIST_H
#define QUEUELINKEDLIST_H

#include <iostream>
#include "../Node/node.h"

class MyQueueLinkedList
{
    Node<int> *front;
    Node<int> *rear;

public:
    MyQueueLinkedList();
    void display();
    void enqueue(int value);
    int dequeue();
    bool isEmpty();
    void peek();
};

#endif
