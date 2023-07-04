#include "double-node.h"

DoubleNode::DoubleNode(int newValue = 0)
{
    value = newValue;
    next = nullptr;
    previous = nullptr;
}