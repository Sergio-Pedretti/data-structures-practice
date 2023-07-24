#include "queue-array.h"

template <typename T>
MyQueueArray<T>::MyQueueArray(int queueSize)
{
    size = queueSize;
    front = -1;
    rear = -1;
    *q = new MyTreeNode<T>[queueSize];
}

template <typename T>
void MyQueueArray<T>::display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        std::cout << q[i] << std::endl;
    }
}

template <typename T>
void MyQueueArray<T>::enqueue(T value)
{
    if (this->isFull())
    {
        return;
    }

    rear++;
    q[rear] = value;
    return;
}
template <typename T>
T MyQueueArray<T>::dequeue()
{
    T value = -1;
    if (!this->isEmpty())
    {
        front++;
        value = q[front];
    }
    return value;
}

template <typename T>
bool MyQueueArray<T>::isEmpty()
{
    if (front == rear)
    {
        std::cout << "Stack is empty" << std::endl;
        return true;
    }
    return false;
}

template <typename T>
bool MyQueueArray<T>::isFull()
{
    if (rear == size - 1)
    {
        std::cout << "Queue is full (Queue would Overflow)" << std::endl;
        return true;
    }
    return false;
}

template <typename T>
void MyQueueArray<T>::peek()
{
    if (this->isEmpty())
        return;

    std::cout << "Peek: " << q[front] << std::endl;
}