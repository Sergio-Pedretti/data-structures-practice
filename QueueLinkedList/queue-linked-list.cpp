#include "queue-linked-list.h"

MyQueueLinkedList::MyQueueLinkedList()
{
    front = nullptr;
    rear = nullptr;
}

void MyQueueLinkedList::display()
{
    Node<int> *temp = front;
    while (temp != nullptr)
    {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

void MyQueueLinkedList::enqueue(int value)
{
    Node<int> *temp = new Node(value);
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

int MyQueueLinkedList::dequeue()
{
    int value = -1;
    if (!this->isEmpty())
    {
        Node<int> *temp = front;
        value = temp->value;
        front = front->next;
        delete temp;
    }
    return value;
}

bool MyQueueLinkedList::isEmpty()
{
    if (front == nullptr)
    {
        std::cout << "Queue is empty" << std::endl;
        return true;
    }
    return false;
}

void MyQueueLinkedList::peek()
{
    if (this->isEmpty())
        return;

    std::cout << "Peek: " << front->value << std::endl;
}