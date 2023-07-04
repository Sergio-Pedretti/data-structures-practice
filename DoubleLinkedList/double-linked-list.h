#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include <iostream>
#include "../DoubleNode/double-node.h"

class MyDoubleLinkedList
{
    DoubleNode *head;

public:
    DoubleNode *getHead();
    void insertBegin(int element);
    void insertEnd(int element);
    void insertAtIndex(int element, int index);
    void deleteAtIndex(int index);
    DoubleNode *searchElement(int element);
    void print();
    void printRecursive(DoubleNode *start);
    void countAllNodes();
    void sumAllNodes();
    bool isSorted();
    void insertSorted(int element);
    void reverseList();
    bool checkForLoop();
    MyDoubleLinkedList();
};

#endif
