#include "queue-linked-list.h"

template <typename T>
MyQueueLinkedList<T>::MyQueueLinkedList()
{
    front = nullptr;
    rear = nullptr;
}

template <typename T>
void MyQueueLinkedList<T>::display()
{
    Node<T> *temp = front;
    while (temp != nullptr)
    {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

template <typename T>
void MyQueueLinkedList<T>::enqueue(T value)
{
    Node<T> *temp = new Node(value);
    if (this->isEmpty())
    {
        front = temp;
        rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
    return;
}

template <typename T>
T MyQueueLinkedList<T>::dequeue()
{
    T value = -1;
    if (!this->isEmpty())
    {
        Node<T> *temp = front;
        value = temp->value;
        front = front->next;
        delete temp;
    }
    return value;
}

template <typename T>
bool MyQueueLinkedList<T>::isEmpty()
{
    if (front == nullptr)
    {
        std::cout << "Queue is empty" << std::endl;
        return true;
    }
    return false;
}

template <typename T>
void MyQueueLinkedList<T>::peek()
{
    if (this->isEmpty())
        return;

    std::cout << "Peek: " << front->value << std::endl;
}

template class MyQueueLinkedList<int>;
template class MyQueueLinkedList<char>;
template class MyQueueLinkedList<float>;