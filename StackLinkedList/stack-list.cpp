#include "stack-list.h"

template <typename T>
MyStackList<T>::MyStackList()
{
    top = nullptr;
}

template <typename T>
void MyStackList<T>::display()
{
    Node<T> *temp = top;
    while (temp != nullptr)
    {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

template <typename T>
void MyStackList<T>::push(T value)
{
    Node<T> *newNode = new Node(value);

    if (top != nullptr)
    {
        newNode->next = top;
    }
    top = newNode;
    return;
}

template <typename T>
T MyStackList<T>::pop()
{
    int value = -1;
    if (this->isEmpty())
    {
    }
    else
    {
        Node<T> *temp = top;
        top = temp->next;
        value = temp->value;
        delete temp;
    }
    return value;
}

template <typename T>
bool MyStackList<T>::isEmpty()
{
    if (top == nullptr)
    {
        std::cout << "Stack is empty" << std::endl;
        return true;
    }
    return false;
}

template <typename T>
T MyStackList<T>::peek()
{
    if (this->isEmpty())
        return -1;

    std::cout << "Peek: " << top->value << std::endl;
    return top->value;
}

template <typename T>
void MyStackList<T>::clear()
{
    Node<T> *temp = top;
    while (temp != nullptr)
    {
        Node<T> *temp2 = temp;
        temp = temp->next;
        delete temp2;
    }
    top = nullptr;
}

template class MyStackList<int>;
template class MyStackList<char>;
template class MyStackList<float>;