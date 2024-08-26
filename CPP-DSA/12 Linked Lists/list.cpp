#include "list.h"

#include <iostream>
#include <string>

Node::Node()
{
    this->message = "EMPTY";
    this->link = nullptr;
};

Node::Node(std::string message)
{
    this->message = message;
    this->link = nullptr;
}

Node::~Node()
{
    std::cout << "Node with message: " << this->message << " is deleted." << std::endl;
}

void Node::printNode(Node *node)
{
    std::cout << node->message << std::endl;
}

LinkedList::~LinkedList()
{
    std::cout << "List is deleted!" << std::endl;
}

void LinkedList::traversePrint()
{
    Node *temp = this->head;
    int counter{1};
    std::cout << "--------LINKED LIST--------" << std::endl;
    while (temp != nullptr)
    {
        std::cout << counter++ << ". ";
        printNode(temp);
        temp = temp->link;
    }
    std::cout << "-------END OF LIST---------" << std::endl;
};

void LinkedList::addNode(std::string data)
{
    Node *temp{new Node(data)};

    if (this->head == nullptr)
    {
        this->head = temp;
    }
    else
    {
        Node *tempTraversal = this->head;
        while (tempTraversal->link != nullptr)
        {
            tempTraversal = tempTraversal->link;
        }
        tempTraversal->link = temp;
    }
};

void LinkedList::addPrefixNode(std::string data)
{
    if (this == nullptr)
    {
        return;
    }
    else
    {
        Node *temp = new Node(data);
        temp->link = this->head;
        this->head = temp;
    }
};

void LinkedList::addNodeToPosition(int pos, std::string data)
{
    Node *temp{new Node(data)};

    Node *tempTraversal = this->head;

    for (size_t i{1}; i < pos - 1; ++i)
    {
        tempTraversal = tempTraversal->link;
    }
    temp->link = tempTraversal->link;
    tempTraversal->link = temp;
}

void LinkedList::deleteNode(int pos)
{
    Node *tempTraversal = this->head;

    if (pos == 1)
    {
        Node *deletedFirst = tempTraversal;
        this->head = tempTraversal->link;
        delete deletedFirst;
        return;
    };
    for (size_t i{1}; i < pos - 1; i++)
    {
        tempTraversal = tempTraversal->link;
    }

    Node *deletedNode = tempTraversal->link;
    tempTraversal->link = deletedNode->link;
    delete deletedNode;
}

void LinkedList::reverseList()
{
    Node *iterator{this->head};
    Node *current{iterator};
    Node *prev{nullptr};
    Node *next{nullptr};

    while (current != nullptr)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    this->head = prev;
}

void LinkedList::printNode(Node *node)
{
    std::cout << "Add: " << node << " | Message: " << node->message << " | " << node->link << std::endl;
}