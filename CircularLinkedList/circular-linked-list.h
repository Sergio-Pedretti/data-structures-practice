#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

#include <iostream>
#include "../Node/node.h"

class MyCircularLinkedList
{
    Node<int> *head;
    void deleteHead();

public:
    Node<int> *getHead();
    void insert(int element);
    void deleteAtIndex(int index);
    void print();
    MyCircularLinkedList();
};

#endif