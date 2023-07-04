#ifndef DOUBLENODE_H
#define DOUBLENODE_H

class DoubleNode
{
public:
    int value;
    DoubleNode *next;
    DoubleNode *previous;
    DoubleNode(int value);
};

#endif
