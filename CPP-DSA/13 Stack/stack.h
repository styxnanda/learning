#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>

class Node
{
public:
    std::string data{};
    Node *next{nullptr};

public:
    Node() = default;
    ~Node();
    Node(std::string);
};

class Stack
{
public:
    Node *top{nullptr};

public:
    Stack() = default;
    ~Stack();
    bool isEmpty();
    void viewTop();
    void pop();
    void push(std::string);
    void display();
};

#endif