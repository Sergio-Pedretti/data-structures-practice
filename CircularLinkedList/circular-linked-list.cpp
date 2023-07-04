#include "circular-linked-list.h"

MyCircularLinkedList::MyCircularLinkedList()
{
    head = nullptr;
}

Node *MyCircularLinkedList::getHead()
{
    return this->head;
}

void MyCircularLinkedList::print()
{
    if (head == nullptr)
    {
        std::cout << "List empty" << std::endl;
        return;
    }

    Node *temp = head;

    do
    {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    } while (temp != head);
}

void MyCircularLinkedList::insert(int element)
{
    Node *newNode = new Node(element);
    Node *temp = head;

    if (temp == nullptr)
    {
        newNode->next = head;
        head = newNode;
        head->next = head;
        return;
    }

    Node *temp2 = nullptr;

    do
    {
        temp2 = temp;
        temp = temp->next;

    } while (temp != head);

    newNode->next = temp;
    temp2->next = newNode;
}

void MyCircularLinkedList::deleteHead()
{
    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = head->next;
    delete head;
    head = temp->next;
}

void MyCircularLinkedList::deleteAtIndex(int index)
{
    if (head == nullptr)
    {
        std::cout << "List empty" << std::endl;
        return;
    }

    if (index == 0)
    {
        this->deleteHead();
        return;
    }
    Node *temp = head;

    for (int counter = 0; counter < index - 2; counter++)
    {
        temp = temp->next;
    }

    Node *temp2 = temp->next;
    temp->next = temp2->next;

    delete temp2;
}