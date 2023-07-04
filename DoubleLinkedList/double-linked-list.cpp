#include "double-linked-list.h"

MyDoubleLinkedList::MyDoubleLinkedList()
{
    head = nullptr;
}

DoubleNode *MyDoubleLinkedList::getHead()
{
    return this->head;
}

void MyDoubleLinkedList::print()
{
    if (head == nullptr)
    {
        std::cout << "List empty" << std::endl;
        return;
    }

    DoubleNode *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

void MyDoubleLinkedList::countAllNodes()
{
    int counter = 0;
    DoubleNode *temp = head;
    while (temp != nullptr)
    {
        counter++;
        temp = temp->next;
    }
    std::cout << "List has " << counter << " DoubleNodes" << std::endl;
}

void MyDoubleLinkedList::sumAllNodes()
{
    int sum = 0;
    DoubleNode *temp = head;
    while (temp != nullptr)
    {
        sum += temp->value;
        temp = temp->next;
    }
    std::cout << "Total sum list: " << sum << std::endl;
}

void MyDoubleLinkedList::insertBegin(int element)
{
    DoubleNode *newNode = new DoubleNode(element);
    if (head != nullptr)
    {
        newNode->next = head;
        newNode->previous = nullptr;
        head->previous = newNode;
    }
    head = newNode;
}

void MyDoubleLinkedList::insertAtIndex(int element, int index)
{

    if (index == 0)
    {
        this->insertBegin(element);
        return;
    }

    DoubleNode *newDoubleNode = new DoubleNode(element);

    DoubleNode *temp = head;

    for (int counter = 0; counter < index - 1; counter++)
    {
        temp = temp->next;
    }

    if (temp->next == nullptr)
    {
        temp->next = newDoubleNode;
        newDoubleNode->previous = temp;
        newDoubleNode->next = nullptr;
        return;
    }

    newDoubleNode->next = temp->next;
    newDoubleNode->previous = temp;
    temp->next = newDoubleNode;
}

void MyDoubleLinkedList::deleteBegin()
{
    DoubleNode *temp = head;

    head = head->next;
    head->previous = nullptr;
    delete temp;
}

void MyDoubleLinkedList::deleteAtIndex(int index)
{
    if (head == nullptr)
    {
        return;
    }

    if (index == 0)
    {
        this->deleteBegin();
        return;
    }

    DoubleNode *temp = head;

    for (int counter = 0; counter < index; counter++)
    {
        temp = temp->next;
    }

    if (temp->next == nullptr)
    {
        temp->previous->next = nullptr;
        delete temp;
        return;
    }

    temp->previous->next = temp->next;
    temp->next->previous = temp->previous;

    delete temp;
}

DoubleNode *MyDoubleLinkedList::searchElement(int element)
{
    DoubleNode *temp = head;

    while (temp != nullptr)
    {
        if (temp->value == element)
        {
            std::cout << "Element " << temp->value << " found" << std::endl;
            return temp;
        }
        temp = temp->next;
    }
    std::cout << "Element " << element << " is not in the list" << std::endl;
    return temp;
}

bool MyDoubleLinkedList::isSorted()
{
    DoubleNode *temp, *temp2 = head;

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

void MyDoubleLinkedList::insertSorted(int element)
{
    DoubleNode *temp = head;
    DoubleNode *temp2 = head;
    DoubleNode *newDoubleNode = new DoubleNode(element);

    if (head == nullptr)
    {
        head = newDoubleNode;
        return;
    }

    while (temp != nullptr)
    {
        if (temp->value >= element)
        {
            if (temp == head)
            {
                newDoubleNode->next = temp;
                head = newDoubleNode;
                return;
            }
            newDoubleNode->next = temp;
            temp2->next = newDoubleNode;
            return;
        }
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = newDoubleNode;
}

void MyDoubleLinkedList::reverseList()
{
    if (head == nullptr)
    {
        std::cout << "Empty List can not be reversed" << std::endl;
        return;
    }

    DoubleNode *temp = head;
    DoubleNode *temp2 = nullptr;
    DoubleNode *temp3 = nullptr;

    while (temp != nullptr)
    {
        temp3 = temp2;
        temp2 = temp;
        temp = temp->next;

        temp2->next = temp3;
    }

    head = temp2;
}

bool MyDoubleLinkedList::checkForLoop()
{
    if (head == nullptr)
    {
        std::cout << "Empty List" << std::endl;
        return false;
    }

    DoubleNode *temp = head;
    DoubleNode *temp2 = head;

    do
    {
        temp = temp->next;
        temp2 = temp2->next;

        temp2 = temp2 ? temp2->next : temp2;

    } while (temp != nullptr && temp2 != nullptr && temp != temp2);

    if (temp == temp2)
    {
        std::cout << "Circular List (has loop)" << std::endl;
        return true;
    }

    std::cout << "Linear List" << std::endl;

    return false;
}