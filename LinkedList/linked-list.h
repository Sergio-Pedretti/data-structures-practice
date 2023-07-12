#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "../Node/node.h"

class MyLinkedList
{
    Node<int> *head;

public:
    Node<int> *getHead();
    void insertBegin(int element);
    void insertEnd(int element);
    void insertAtIndex(int element, int index);
    void deleteAtIndex(int index);
    Node<int> *searchElement(int element);
    void print();
    void printRecursive(Node<int> *start);
    void countAllNodes();
    void sumAllNodes();
    bool isSorted();
    void insertSorted(int element);
    void reverseList();
    bool checkForLoop();
    MyLinkedList();
};

#endif
