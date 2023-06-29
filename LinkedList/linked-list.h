#include <iostream>
#include "../Node/node.cpp"

class MyLinkedList
{
    Node *head;

public:
    Node *getHead();
    void insertBegin(int element);
    void insertEnd(int element);
    void insertAtIndex(int element, int index);
    void deleteAtIndex(int index);
    void print();
    void printRecursive(Node *start);
    void countAllNodes();
    void sumAllNodes();
    MyLinkedList();
};
