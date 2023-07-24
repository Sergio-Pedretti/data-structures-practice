#include "tree-queue.h"

template <typename T>
MyTreeQueue<T>::MyTreeQueue()
{
    root = nullptr;
}

template <typename T>
void MyTreeQueue<T>::CreateTree()
{
    T value;
    MyTreeNode<T> *p;
    MyTreeNode<T> *t = new MyTreeNode<T>();

    printf("Enter Root value");
    scanf("%d", &value);
    root.value = value;
    root.leftChild = root.rightChild = nullptr;
    queue.enqueue(root);

    while (!queue.isEmpty())
    {
        p = queue.dequeue();
        printf("Enter Left value");
        scanf("%d", &value);
        if (value != -1)
        {
            t->value = value;
            t->leftChild = t->rightChild = nullptr;
            p->leftChild = t;
            queue.enqueue(t);
        }

        printf("Enter Right value");
        scanf("%d", &value);
        if (value != -1)
        {
            t->value = value;
            t->leftChild = t->rightChild = nullptr;
            p->leftChild = t;
            queue.enqueue(t);
        }
    }
}

template <typename T>
void MyTreeQueue<T>::PreOrder()
{
    if (root)
    {
        printf("%d", root->value);
        this->PreOrder(root->leftChild);
        this->PreOrder(root->rightChild);
    }
}

template class MyTreeQueue<int>;
template class MyTreeQueue<char>;
template class MyTreeQueue<float>;