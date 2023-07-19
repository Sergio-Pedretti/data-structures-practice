#include "circular-queue-array.h"

MyCircularQueueArray::MyCircularQueueArray(int queueSize)
{

    size = queueSize;
    front = -1;
    rear = -1;
    q = new int(queueSize);
}

void MyCircularQueueArray::display()
{
    int i = front + 1;

    do
    {
        std::cout << q[i] << std::endl;
        if (i < rear)
        {
            std::cout << "<---" << std::endl;
        }
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
}

void MyCircularQueueArray::enqueue(int value)
{
    if (this->isFull())
    {
        return;
    }

    rear = (rear + 1) % size;
    q[rear] = value;
    return;
}

int MyCircularQueueArray::dequeue()
{
    int value = -1;
    if (!this->isEmpty())
    {
        front = (front + 1) % size;
        value = q[front];
    }
    return value;
}

bool MyCircularQueueArray::isEmpty()
{
    if (front == rear)
    {
        std::cout << "Stack is empty" << std::endl;
        return true;
    }
    return false;
}

bool MyCircularQueueArray::isFull()
{
    if ((rear + 1) % size == front)
    {
        std::cout << "Queue is full (Queue would Overflow)" << std::endl;
        return true;
    }
    return false;
}

void MyCircularQueueArray::peek()
{
    if (this->isEmpty())
        return;

    std::cout << "Peek: " << q[front] << std::endl;
}

MyCircularQueueArray::~MyCircularQueueArray()
{
    delete[] q;
}