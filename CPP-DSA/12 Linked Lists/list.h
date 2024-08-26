#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>

class Node
{
public:
    std::string message;
    Node *link;

public:
    Node();
    Node(std::string);
    ~Node();
    void printNode(Node *);
};

class LinkedList
{
public:
    Node *head{nullptr};

    LinkedList() = default;
    ~LinkedList();
    void addPrefixNode(std::string);
    void traversePrint();
    void addNode(std::string);
    void printNode(Node *);
    void addNodeToPosition(int, std::string);
    void deleteNode(int);
    void reverseList();
};

#endif