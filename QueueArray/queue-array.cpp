#include "queue-array.h"

MyQueueArray::MyQueueArray(int queueSize)
{
    size = queueSize;
    front = -1;
    rear = -1;
    q = new int(queueSize);
}

void MyQueueArray::display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        std::cout << q[i] << std::endl;
    }
}

void MyQueueArray::enqueue(int value)
{
    if (this->isFull())
    {
        return;
    }

    rear++;
    q[rear] = value;
    return;
}
int MyQueueArray::dequeue()
{
    int value = -1;
    if (!this->isEmpty())
    {
        front++;
        value = q[front];
    }
    return value;
}

bool MyQueueArray::isEmpty()
{
    if (front == rear)
    {
        std::cout << "Stack is empty" << std::endl;
        return true;
    }
    return false;
}

bool MyQueueArray::isFull()
{
    if (rear == size - 1)
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

    std::cout << "Peek: " << q[front] << std::endl;
}