#include "linked-list.h"

MyLinkedList::MyLinkedList()
{
    head = nullptr;
}

void MyLinkedList::print()
{
    if (head == nullptr)
    {
        std::cout << "List empty" << std::endl;
        return;
    }

    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

void MyLinkedList::insertBegin(int element)
{
    Node *temp = new Node(element);
    if (head != nullptr)
    {
        temp->next = head;
    }
    head = temp;
}