#ifndef TREEQUEUE_H
#define TREEQUEUE_H

#include <iostream>
#include "../QueueArray/queue-array.h"
#include "../TreeNode/tree-node.h"

template <typename T>
class MyTreeQueue
{
    MyTreeNode<T> *root;
    MyQueueArray<T> queue;

public:
    MyTreeQueue();
    void CreateTree();
    void PreOrder();
};

#endif
