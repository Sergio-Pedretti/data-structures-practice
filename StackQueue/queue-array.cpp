#include "queue-array.h"

MyQueueArray::MyQueueArray(int queueSize)
{
    size = queueSize;
    front = -1;
    rear = -1;
    s = new int(queueSize);
}

void MyQueueArray::display()
{
    for (int i = front; i == rear; i--)
    {
        std::cout << s[i] << std::endl;
    }
}

void MyQueueArray::enqueue(int value)
{
    if (this->isFull())
    {
        return;
    }

    rear++;
    s[rear] = value;
    return;
}

int MyQueueArray::dequeue()
{
    int value = -1;
    if (this->isEmpty())
    {
    }
    else
    {
        value = s[front];
        front++;
    }
    return value;
}

bool MyQueueArray::isEmpty()
{
    if (front == -1)
    {
        std::cout << "Stack is empty" << std::endl;
        return true;
    }
    return false;
}

bool MyQueueArray::isFull()
{
    if (front == rear)
    {
        std::cout << "Queue is full (Queue would Overflow)" << std::endl;
        return true;
    }
    return false;
}

void MyQueueArray::peek()
{
    if (this->isEmpty())
        return;

    std::cout << "Peek: " << s[front] << std::endl;
}