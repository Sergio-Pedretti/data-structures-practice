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

void MyLinkedList::insertEnd(int element)
{
    Node *newNode = new Node(element);
    Node *temp = head;

    if (temp == nullptr)
    {
        head = newNode;
        return;
    }

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void MyLinkedList::insertAtIndex(int element, int index)
{
    Node *newNode = new Node(element);

    if (index == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp2 = head;

    for (int counter = 0; counter < index - 2; counter++)
    {
        temp2 = temp2->next;
    }

    newNode->next = temp2->next;
    temp2->next = newNode;
}