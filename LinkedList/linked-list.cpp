#include "linked-list.h"

MyLinkedList::MyLinkedList()
{
    head = nullptr;
}

Node *MyLinkedList::getHead()
{
    return this->head;
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

void MyLinkedList::printRecursive(Node *start)
{
    if (start == nullptr)
    {
        return;
    }
    std::cout << start->value << std::endl;
    printRecursive(start->next);
}

void MyLinkedList::countAllNodes()
{
    int counter = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        counter++;
        temp = temp->next;
    }
    std::cout << "List has " << counter << " nodes" << std::endl;
}

void MyLinkedList::sumAllNodes()
{
    int sum = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        sum += temp->value;
        temp = temp->next;
    }
    std::cout << "Total sum list: " << sum << std::endl;
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

void MyLinkedList::deleteAtIndex(int index)
{
    Node *temp = head;

    for (int counter = 0; counter < index - 2; counter++)
    {
        temp = temp->next;
    }

    Node *temp2 = temp->next;
    temp->next = temp2->next;

    delete temp2;
}

Node *MyLinkedList::searchElement(int element)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->value == element)
        {
            std::cout << "Element " << temp->value << " found" << std::endl;
            return temp;
        }
        temp = temp->next;
    }
    temp->next = nullptr;
    temp->value = 0;
    return temp;
}

bool MyLinkedList::isSorted()
{
    Node *temp, *temp2 = head;

    while (temp != nullptr)
    {
        if (temp->value < temp2->value)
        {
            std::cout << "Not sorted" << std::endl;
            return false;
        }
        temp2 = temp;
        temp = temp->next;
    }
    std::cout << "Sorted" << std::endl;
    return true;
}