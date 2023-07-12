#include "circular-linked-list.h"

MyCircularLinkedList::MyCircularLinkedList()
{
    head = nullptr;
}

Node<int> *MyCircularLinkedList::getHead()
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

    Node<int> *temp = head;

    do
    {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    } while (temp != head);
}

void MyCircularLinkedList::insert(int element)
{
    Node<int> *newNode = new Node(element);
    Node<int> *temp = head;

    if (temp == nullptr)
    {
        newNode->next = head;
        head = newNode;
        head->next = head;
        return;
    }

    Node<int> *temp2 = nullptr;

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
    Node<int> *temp = head;

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
    Node<int> *temp = head;

    for (int counter = 0; counter < index - 2; counter++)
    {
        temp = temp->next;
    }

    Node<int> *temp2 = temp->next;
    temp->next = temp2->next;

    delete temp2;
}