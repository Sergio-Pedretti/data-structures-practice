#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "../Node/node.h"

template <typename T>
class MyLinkedList
{
    Node<T> *head;

public:
    Node<T> *getHead();
    void insertBegin(T element);
    void insertEnd(T element);
    void insertAtIndex(T element, int index);
    void deleteAtIndex(int index);
    Node<T> *searchElement(T element);
    void print();
    void printRecursive(Node<T> *start);
    void countAllNodes();
    void sumAllNodes();
    bool isSorted();
    void insertSorted(T element);
    void reverseList();
    bool checkForLoop();
    MyLinkedList();
};

#endif
