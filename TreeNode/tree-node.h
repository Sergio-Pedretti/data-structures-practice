#ifndef TREENODE_H
#define TREENODE_H

template <typename T>
class MyTreeNode
{
public:
    T value;
    MyTreeNode *leftChild;
    MyTreeNode *rightChild;
    MyTreeNode();
    ~MyTreeNode();
};

#endif
