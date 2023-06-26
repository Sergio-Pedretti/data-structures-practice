#include <iostream>
#include "./LinkedList/linked-list.cpp"

int main()
{
    MyLinkedList list;
    list.insertEnd(2);
    list.insertEnd(5);
    list.insertEnd(8);
    list.insertEnd(10);
    list.insertEnd(4);
    list.print();
}