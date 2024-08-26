#include <iostream>
#include <string>
#include "stack.h"

Node::Node(std::string data)
{
    this->data = data;
    this->next = nullptr;
};

Node::~Node()
{
    std::cout << "Message popped: " << this->data << std::endl;
}

Stack::~Stack()
{
    std::cout << "Stack deleted!" << std::endl;
}

bool Stack::isEmpty()
{
    return this->top == nullptr;
}

void Stack::viewTop()
{
    if (!this->isEmpty())
    {
        std::cout << this->top->data << std::endl;
    }
    else
    {
        std::cout << "Stack is empty!" << std::endl;
    }
}

void Stack::pop()
{
    if (!this->isEmpty())
    {
        Node *temp{this->top};
        this->top = this->top->next;
        delete temp;
    }
    else
    {
        std::cout << "Stack is empty!" << std::endl;
    }
}

void Stack::push(std::string data)
{
    Node *temp{new Node(data)};
    if (!this->isEmpty())
    {
        temp->next = this->top;
    }
    this->top = temp;
}

void Stack::display()
{
    std::cout << "-----STACK (TOP TO BOTTOM)-----" << std::endl;

    Node *traverser = this->top;
    while (traverser != nullptr)
    {
        std::cout << traverser->data << std::endl;
        traverser = traverser->next;
    }
    std::cout << "---------PIT OF STACK---------" << std::endl;
}