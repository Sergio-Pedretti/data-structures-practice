#include "tree-node.h"

template <typename T>
MyTreeNode<T>::MyTreeNode()
{
    leftChild = nullptr;
    rightChild = nullptr;
}

template <typename T>
MyTreeNode<T>::~MyTreeNode()
{
    delete leftChild;
    delete rightChild;
    value = 0;
}
