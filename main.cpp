#include <iostream>
#include <string.h>

#include "./LinkedList/linked-list.h"
#include "./CircularLinkedList/circular-linked-list.h"
#include "./DoubleLinkedList/double-linked-list.h"
#include "./StackArray/stack-array.h"
#include "./StackLinkedList/stack-list.h"

void testLinkedList()
{
    MyLinkedList list;
    list.insertAtIndex(2, 1); // 2
    list.insertAtIndex(3, 2); // 2, 3
    list.insertAtIndex(4, 1); // 4, 2, 3
    list.insertAtIndex(5, 2); // 4, 5, 2, 3
    list.insertSorted(15);    // 4, 5, 2, 3, 15
    list.insertSorted(8);     // 4, 5, 2, 3, 8, 15
    list.insertSorted(3);     // 3, 4, 5, 2, 3, 8, 15
    list.print();
    list.countAllNodes();
    list.sumAllNodes();
    list.deleteAtIndex(3); // 4, 5, 3
    list.printRecursive(list.getHead());
    list.countAllNodes();
    list.sumAllNodes();
    list.searchElement(5);
    list.isSorted();
    list.reverseList();
    list.print();
    list.checkForLoop();
}

void testCircularLinkedList()
{
    MyCircularLinkedList list;
    list.insert(4);
    list.insert(6);
    list.insert(8);
    list.insert(10);
    list.insert(20);
    list.print();
    list.deleteAtIndex(0);
    list.print();
}

void testDoubleLinkedList()
{
    MyDoubleLinkedList list;
    list.insertAtIndex(4, 0);  // 4
    list.insertAtIndex(5, 1);  // 4, 5
    list.insertAtIndex(7, 2);  // 4, 5, 7
    list.insertAtIndex(20, 3); // 4, 5, 7, 20
    list.insertAtIndex(47, 3); // 4, 5, 7, 47, 20
    list.print();
    std::cout << "----------" << std::endl;
    list.deleteBegin(); // 5, 7, 47, 20
    list.print();
    std::cout << "----------" << std::endl;
    list.deleteAtIndex(2); // 5, 7, 20
    list.print();
    std::cout << "----------" << std::endl;
    list.deleteAtIndex(2); // 5, 7
    list.print();
}

void testStackWithArray()
{
    int size;
    std::cout << "Enter stack size: " << std::endl;
    std::cin >> size;
    MyStackArray stack(size);
    std::cout << "----------------" << std::endl;
    stack.push(2);
    stack.push(4);
    stack.peek();
    stack.display();
    std::cout << "----------------" << std::endl;
    stack.push(7);
    stack.push(15);
    stack.peek();
    stack.push(-5);
    stack.display();
    std::cout << "----------------" << std::endl;
    stack.push(2);
    int popped = stack.pop();
    std::cout << popped << std::endl;
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
}

void testStackWithList()
{
    MyStackList stack;
    std::cout << "----------------" << std::endl;
    stack.push(2);
    stack.push(4);
    stack.peek();
    std::cout << "----------------" << std::endl;
    stack.display();
    std::cout << "----------------" << std::endl;
    stack.push(7);
    stack.push(15);
    stack.peek();
    std::cout << "----------------" << std::endl;
    stack.push(-5);
    stack.display();
    std::cout << "----------------" << std::endl;
    stack.push(45);
    int popped = stack.pop();
    std::cout << popped << std::endl;
    popped = stack.pop();
    std::cout << popped << std::endl;
    popped = stack.pop();
    std::cout << popped << std::endl;
    popped = stack.pop();
    std::cout << popped << std::endl;
    popped = stack.pop();
    std::cout << popped << std::endl;
    popped = stack.pop();
    std::cout << popped << std::endl;
    popped = stack.pop();
    std::cout << popped << std::endl;
}

int checkParenthesisMatch(char expression[])
{
    MyStackList stack;
    int size = strlen(expression);
    for (int i = 0; i < size; i++)
    {
        if (expression[i] == '(')
        {
            stack.push(expression[i]);
        }
        else if (expression[i] == ')')
        {
            char popped = stack.pop();
            if (popped == -1)
            {
                return 0;
            }
        }
    }
    if (stack.isEmpty())
    {
        return 1;
    }
    return 0;
}

void testCheckParenthesis()
{
    char array[] = {'(', '(', 'a', '+', 'b', ')', '\0'};
    int response = checkParenthesisMatch(array);
    std::cout << response << std::endl;

    char arrayTwo[] = {'(', '(', 'a', '+', 'b', ')', ')', '\0'};
    int response2 = checkParenthesisMatch(arrayTwo);
    std::cout << response2 << std::endl;

    char arrayThree[] = {'(', '(', 'a', '+', 'b', ')', ')', ')', '\0'};
    int response3 = checkParenthesisMatch(arrayThree);
    std::cout << response3 << std::endl;
}

int isOperand(char operators)
{
    if (operators == '+' || operators == '-' || operators == '*' || operators == '/' || operators == '^')
    {
        return 0;
    }
    return 1;
}

int operatorPrecedency(char operators)
{
    if (operators == '+' || operators == '-')
    {
        return 1;
    }
    else if (operators == '*' || operators == '/')
    {
        return 2;
    }
    else if (operators == '^')
    {
        return 3;
    }
    else
        return 0;
}

char *infixToPostfixConvertion(char *infix)
{
    MyStackList stack;
    int size = strlen(infix);
    char *postfix = new char[size + 1];
    postfix[0] = 'g';
    postfix[1] = 'a';
    postfix[2] = 'y';

    int i, j;

    i = j = 0;

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {

            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (operatorPrecedency(infix[i]) > operatorPrecedency(stack.peek()))
            {
                stack.push(infix[i]);
                i++;
            }
            else
            {
                postfix[j] = stack.pop();
                j++;
            }
        }
    }

    while (!stack.isEmpty())
    {
        postfix[j] = stack.pop();
        j++;
    }

    postfix[j] = '\0';

    return postfix;
}

void testInfixToPostfixConvertion()
{
    char infix[] = {'a', '+', 'b', '+', 'c', '+', 'd', '\0'};
    char *postfix = infixToPostfixConvertion(infix);
    std::cout << postfix << std::endl;
}

int main()
{
    testInfixToPostfixConvertion();
}
