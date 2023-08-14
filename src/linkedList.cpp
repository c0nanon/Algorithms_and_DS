#include "linkedList.h"

Node::Node(int value)
{
    data = value;
    next = nullptr;
}

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}


void LinkedList::appendNode(Node* node)
{
    if (tail)
    {
        tail->next = node;
        tail = node;
    }
    else
    {
        head = node;
        tail = node;
    }
}


void LinkedList::queueNode(Node* node)
{
    if (head)
    {
        node->next = head;
        head = node;
    }
    else
    {
        head = node;
        tail = node;
    }
}


void LinkedList::traverseToIndex(int index)
{
    for (int i{}; i < index; ++i)
    {
        head = head->next;
    }
}


int LinkedList::operator[](int index)
{
    Node* headCopy;
    headCopy = head;

    for (int i{}; i < index; ++i)
    {
        headCopy = headCopy->next;
    }

    return headCopy->data;
}
