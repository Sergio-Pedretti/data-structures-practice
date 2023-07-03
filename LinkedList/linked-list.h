#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "../Node/node.h"

class MyLinkedList
{
    Node *head;

public:
    Node *getHead();
    void insertBegin(int element);
    void insertEnd(int element);
    void insertAtIndex(int element, int index);
    void deleteAtIndex(int index);
    Node *searchElement(int element);
    void print();
    void printRecursive(Node *start);
    void countAllNodes();
    void sumAllNodes();
    bool isSorted();
    void insertSorted(int element);
    void reverseList();
    bool checkForLoop();
    MyLinkedList();
};

#endif
