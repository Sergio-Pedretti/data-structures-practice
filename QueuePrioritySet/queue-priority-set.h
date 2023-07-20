#ifndef QUEUEPRIORITYSET_H
#define QUEUEPRIORITYSET_H

#include <iostream>
#include "../QueueLinkedList/queue-linked-list.h"

typedef enum
{
    High,
    Medium,
    Low,
} Level;

struct Priority
{
    char value;
    Level level;
};

class MyQueuePriority
{
    MyQueueLinkedList<char> highQueue;
    MyQueueLinkedList<char> mediumQueue;
    MyQueueLinkedList<char> lowQueue;

public:
    MyQueuePriority();
    void display();
    void enqueue(Priority &priority);
    char dequeue();
    bool isEmpty();
};

#endif
