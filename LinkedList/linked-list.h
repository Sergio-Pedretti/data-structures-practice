#include <iostream>
#include "../Node/node.cpp"

class MyLinkedList
{
    Node *head;

public:
    void insertBegin(int element);
    void insertEnd(int element);
    void insertAtIndex(int element, int index);
    void deleteAtIndex(int index);
    void print();
    MyLinkedList();
};
