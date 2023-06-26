#include <iostream>
#include "../Node/node.cpp"

class MyLinkedList
{
    Node *head;

public:
    void insertBegin(int element);
    void print();
    MyLinkedList();
};
