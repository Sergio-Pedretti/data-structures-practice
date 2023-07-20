#include "linked-list.h"

template <typename T>
MyLinkedList<T>::MyLinkedList()
{
    head = nullptr;
}

template <typename T>
Node<T> *MyLinkedList<T>::getHead()
{
    return this->head;
}

template <typename T>
void MyLinkedList<T>::print()
{
    if (head == nullptr)
    {
        std::cout << "List empty" << std::endl;
        return;
    }

    Node<T> *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}
template <typename T>
void MyLinkedList<T>::printRecursive(Node<T> *start)
{
    if (start == nullptr)
    {
        return;
    }
    std::cout << start->value << std::endl;
    printRecursive(start->next);
}

template <typename T>
void MyLinkedList<T>::countAllNodes()
{
    int counter = 0;
    Node<T> *temp = head;
    while (temp != nullptr)
    {
        counter++;
        temp = temp->next;
    }
    std::cout << "List has " << counter << " nodes" << std::endl;
}

template <typename T>
void MyLinkedList<T>::sumAllNodes()
{
    T sum = 0;
    Node<T> *temp = head;
    while (temp != nullptr)
    {
        sum += temp->value;
        temp = temp->next;
    }
    std::cout << "Total sum list: " << sum << std::endl;
}
template <typename T>
void MyLinkedList<T>::insertBegin(T element)
{
    Node<T> *temp = new Node<T>(element);
    if (head != nullptr)
    {
        temp->next = head;
    }
    head = temp;
}

template <typename T>
void MyLinkedList<T>::insertEnd(T element)
{
    Node<T> *newNode = new Node(element);
    Node<T> *temp = head;

    if (temp == nullptr)
    {
        head = newNode;
        return;
    }

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

template <typename T>
void MyLinkedList<T>::insertAtIndex(T element, int index)
{
    Node<T> *newNode = new Node(element);

    if (index == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node<T> *temp2 = head;

    for (int counter = 0; counter < index - 2; counter++)
    {
        temp2 = temp2->next;
    }

    newNode->next = temp2->next;
    temp2->next = newNode;
}

template <typename T>
void MyLinkedList<T>::deleteAtIndex(int index)
{
    Node<T> *temp = head;

    for (int counter = 0; counter < index - 2; counter++)
    {
        temp = temp->next;
    }

    Node<T> *temp2 = temp->next;
    temp->next = temp2->next;

    delete temp2;
}

template <typename T>
Node<T> *MyLinkedList<T>::searchElement(T element)
{
    Node<T> *temp = head;

    while (temp != nullptr)
    {
        if (temp->value == element)
        {
            std::cout << "Element " << temp->value << " found" << std::endl;
            return temp;
        }
        temp = temp->next;
    }
    std::cout << "Element " << element << " is not in the list" << std::endl;
    return temp;
}

template <typename T>
bool MyLinkedList<T>::isSorted()
{
    Node<T> *temp, *temp2 = head;

    while (temp != nullptr)
    {
        if (temp->value < temp2->value)
        {
            std::cout << "Not sorted" << std::endl;
            return false;
        }
        temp2 = temp;
        temp = temp->next;
    }
    std::cout << "Sorted" << std::endl;
    return true;
}

template <typename T>
void MyLinkedList<T>::insertSorted(T element)
{
    Node<T> *temp = head;
    Node<T> *temp2 = head;
    Node<T> *newNode = new Node(element);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    while (temp != nullptr)
    {
        if (temp->value >= element)
        {
            if (temp == head)
            {
                newNode->next = temp;
                head = newNode;
                return;
            }
            newNode->next = temp;
            temp2->next = newNode;
            return;
        }
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = newNode;
}

template <typename T>
void MyLinkedList<T>::reverseList()
{
    if (head == nullptr)
    {
        std::cout << "Empty List can not be reversed" << std::endl;
        return;
    }

    Node<T> *temp = head;
    Node<T> *temp2 = nullptr;
    Node<T> *temp3 = nullptr;

    while (temp != nullptr)
    {
        temp3 = temp2;
        temp2 = temp;
        temp = temp->next;

        temp2->next = temp3;
    }

    head = temp2;
}

template <typename T>
bool MyLinkedList<T>::checkForLoop()
{
    if (head == nullptr)
    {
        std::cout << "Empty List" << std::endl;
        return false;
    }

    Node<T> *temp = head;
    Node<T> *temp2 = head;

    do
    {
        temp = temp->next;
        temp2 = temp2->next;

        temp2 = temp2 ? temp2->next : temp2;

    } while (temp != nullptr && temp2 != nullptr && temp != temp2);

    if (temp == temp2)
    {
        std::cout << "Circular List (has loop)" << std::endl;
        return true;
    }

    std::cout << "Linear List" << std::endl;

    return false;
}

template class MyLinkedList<int>;
template class MyLinkedList<char>;
template class MyLinkedList<float>;