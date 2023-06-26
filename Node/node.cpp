#include "node.h"

Node::Node()
{
    value = 0;
    next = nullptr;
}

Node::Node(int newValue)
{
    value = newValue;
    next = nullptr;
}