#pragma once

class Node 
{
public:
    Node* next;
    int data;
    Node(int value = 0);
};

class LinkedList
{
public:
    Node* head;
    Node* tail;
    LinkedList();
    void appendNode(Node* node);
    void traverseToIndex(int index);
    int operator[](int index);
};
