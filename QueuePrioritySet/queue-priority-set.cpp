#include "queue-priority-set.h"

MyQueuePriority::MyQueuePriority()
{
}

void MyQueuePriority::display()
{
    highQueue.display();
    mediumQueue.display();
    lowQueue.display();
}

void MyQueuePriority::enqueue(Priority &priority)
{
    switch (priority.level)
    {
    case High:
        highQueue.enqueue(priority.value);
        break;
    case Medium:
        mediumQueue.enqueue(priority.value);
        break;
    case Low:
        lowQueue.enqueue(priority.value);
        break;
    default:
        break;
    }
}

char MyQueuePriority::dequeue()
{
    char value;
    if (!highQueue.isEmpty())
    {
        value = highQueue.dequeue();
    }
    else if (!mediumQueue.isEmpty())
    {
        value = mediumQueue.dequeue();
    }
    else if (!lowQueue.isEmpty())
    {
        value = lowQueue.dequeue();
    }
    return value;
}

bool MyQueuePriority::isEmpty()
{
    if (highQueue.isEmpty() && mediumQueue.isEmpty() && lowQueue.isEmpty())
    {
        std::cout << "Queue is empty" << std::endl;
        return true;
    }
    return false;
}