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
    if (top == size - 1)
    {
        std::cout << "Stack is full (Stack would Overflow)" << std::endl;
        return;
    }

    top++;
    s[top] = value;
    return;
}

int MyStackArray::pop()
{
    int value = -1;
    if (top == -1)
    {
        std::cout << "Stack is empty" << std::endl;
    }
    else
    {
        value = s[top];
        top--;
    }
    return value;
}