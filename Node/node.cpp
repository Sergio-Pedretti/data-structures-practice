#include "node.h"

template <typename T>
Node<T>::Node(T newValue)
{
    value = newValue;
    next = nullptr;
}

template class Node<int>;
template class Node<char>;
template class Node<float>;