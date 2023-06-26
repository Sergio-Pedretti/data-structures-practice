#include <iostream>
#include "./LinkedList/linked-list.cpp"

int main()
{
    MyLinkedList list;
    list.insertBegin(2);
    list.insertBegin(5);
    list.insertBegin(8);
    list.insertBegin(10);
    list.insertBegin(4);
    list.print();
}