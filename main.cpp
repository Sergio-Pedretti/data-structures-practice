#include <iostream>
#include "./LinkedList/linked-list.h"
#include "./CircularLinkedList/circular-linked-list.h"
#include "./DoubleLinkedList/double-linked-list.h"

void testLinkedList()
{
    MyLinkedList list;
    list.insertAtIndex(2, 1); // 2
    list.insertAtIndex(3, 2); // 2, 3
    list.insertAtIndex(4, 1); // 4, 2, 3
    list.insertAtIndex(5, 2); // 4, 5, 2, 3
    list.insertSorted(15);    // 4, 5, 2, 3, 15
    list.insertSorted(8);     // 4, 5, 2, 3, 8, 15
    list.insertSorted(3);     // 3, 4, 5, 2, 3, 8, 15
    list.print();
    list.countAllNodes();
    list.sumAllNodes();
    list.deleteAtIndex(3); // 4, 5, 3
    list.printRecursive(list.getHead());
    list.countAllNodes();
    list.sumAllNodes();
    list.searchElement(5);
    list.isSorted();
    list.reverseList();
    list.print();
    list.checkForLoop();
}

void testCircularLinkedList()
{
    MyCircularLinkedList list;
    list.insert(4);
    list.insert(6);
    list.insert(8);
    list.insert(10);
    list.insert(20);
    list.print();
    list.deleteAtIndex(0);
    list.print();
}

void testDoubleLinkedList()
{
    MyDoubleLinkedList list;
    list.insertAtIndex(4, 0);  // 4
    list.insertAtIndex(5, 1);  // 4, 5
    list.insertAtIndex(7, 2);  // 4, 5, 7
    list.insertAtIndex(20, 3); // 4, 5, 7, 20
    list.insertAtIndex(47, 3); // 4, 5, 7, 47, 20
    list.print();
}

int main()
{
    testDoubleLinkedList();
}
