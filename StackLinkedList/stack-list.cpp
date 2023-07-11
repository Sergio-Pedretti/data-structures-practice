#include "stack-list.h"

MyStackList::MyStackList()
{
    top = nullptr;
}

void MyStackList::display()
{
    Node *temp = top;
    while (temp != nullptr)
    {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

void MyStackList::push(int value)
{
    Node *newNode = new Node(value);

    if (top != nullptr)
    {
        newNode->next = top;
    }
    top = newNode;
    return;
}

int MyStackList::pop()
{
    int value = -1;
    if (this->isEmpty())
    {
    }
    else
    {
        Node *temp = top;
        top = temp->next;
        value = temp->value;
        delete temp;
    }
    return value;
}

bool MyStackList::isEmpty()
{
    if (top == nullptr)
    {
        std::cout << "Stack is empty" << std::endl;
        return true;
    }
    return false;
}

char MyStackList::peek()
{
    if (this->isEmpty())
        return 'e';

    std::cout << "Peek: " << top->value << std::endl;
    return top->value;
}

void MyStackList::clear()
{
    Node *temp = top;
    while (temp != nullptr)
    {
        Node *temp2 = temp;
        temp = temp->next;
        delete temp2;
    }
    top = nullptr;
}