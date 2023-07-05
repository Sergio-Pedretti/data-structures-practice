#include "stack-array.h"

MyStackArray::MyStackArray(int stackSize)
{
    size = stackSize;
    top = -1;
    s = new int(stackSize);
}

void MyStackArray::display()
{
    for (int i = top; i >= 0; i--)
    {
        std::cout << s[i] << std::endl;
    }
}

void MyStackArray::push(int value)
{
    if (this->isFull())
    {
        return;
    }

    top++;
    s[top] = value;
    return;
}

int MyStackArray::pop()
{
    int value = -1;
    if (this->isEmpty())
    {
    }
    else
    {
        value = s[top];
        top--;
    }
    return value;
}

bool MyStackArray::isEmpty()
{
    if (top == -1)
    {
        std::cout << "Stack is empty" << std::endl;
        return true;
    }
    return false;
}

bool MyStackArray::isFull()
{
    if (top == size - 1)
    {
        std::cout << "Stack is full (Stack would Overflow)" << std::endl;
        return true;
    }
    return false;
}

void MyStackArray::peek()
{
    if (this->isEmpty())
        return;

    std::cout << "Peek: " << s[top] << std::endl;
}