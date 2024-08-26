#include <iostream>
#include <stack>
#include <queue>
#include <cmath>
#include "bst.h"

Node::Node()
{
    this->left = nullptr;
    this->right = nullptr;
}

Node::Node(int data)
{
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}

BST::BST()
{
    this->root = nullptr;
}

void BST::insert(int data)
{
    if (this->root == nullptr)
    {
        this->root = new Node(data);
        return;
    };

    Node *temp = this->root;
    Node *parent{nullptr};
    while (temp != nullptr)
    {
        parent = temp;
        if (data <= temp->data)
        {
            temp = temp->left;
        }
        else if (data > temp->data)
        {
            temp = temp->right;
        }
    }
    if (data <= parent->data)
    {
        parent->left = new Node(data);
    }
    else
    {
        parent->right = new Node(data);
    }
}

void BST::traverseInOrder()
{
    std::stack<Node *> stack{};
    Node *traverse = this->root;
    std::cout << "In-order: ";
    while (traverse != nullptr || !stack.empty())
    {
        while (traverse != nullptr)
        {
            stack.push(traverse);
            traverse = traverse->left;
        }

        traverse = stack.top();
        std::cout << traverse->data << " ";
        stack.pop();

        traverse = traverse->right;
    };
    std::cout << "\n";
}

void BST::traversePreOrder()
{
    std::stack<Node *> stack{};
    stack.push(this->root);
    std::cout << "Pre-order: ";
    while (!stack.empty())
    {
        Node *node = stack.top();
        stack.pop();
        std::cout << node->data << " ";

        if (node->right != nullptr)
        {
            stack.push(node->right);
        }
        if (node->left != nullptr)
        {
            stack.push(node->left);
        }
    }
    std::cout << "\n";
}

void BST::traversePostOrder()
{
    std::cout << "Post-order: ";
    if (this->root == nullptr)
    {
        return;
    }

    std::stack<Node *> stack;
    Node *current{this->root};
    Node *lastVisited{nullptr};

    while (!stack.empty() || current != nullptr)
    {
        if (current != nullptr)
        {
            stack.push(current);
            current = current->left;
        }
        else
        {
            Node *topNode = stack.top();
            if (topNode->right != nullptr && lastVisited != topNode->right)
            {
                current = topNode->right;
            }
            else
            {
                std::cout << topNode->data << " ";
                lastVisited = topNode;
                stack.pop();
            }
        }
    }

    std::cout << "\n";
}

bool BST::search(int data)
{
    Node *traverse = this->root;

    while (traverse != nullptr)
    {
        if (data == traverse->data)
        {
            return true;
        }
        else if (data < traverse->data)
        {
            traverse = traverse->left;
        }
        else
        {
            traverse = traverse->right;
        }
    }

    return false;
}

int BST::findMinimum()
{
    Node *temp{this->root};

    while (temp->left != nullptr)
    {
        temp = temp->left;
    };

    return temp->data;
}

int BST::findMaximum()
{
    Node *temp{this->root};

    while (temp->right != nullptr)
    {
        temp = temp->right;
    };

    return temp->data;
}

int BST::getHeight()
{
    Node *leftTemp = {this->root};
    Node *rightTemp{this->root};
    int heightLeft{0}, heightRight{0};

    while (leftTemp != nullptr)
    {
        heightLeft += 1;
        leftTemp = leftTemp->left;
    }

    while (rightTemp != nullptr)
    {
        heightRight += 1;
        rightTemp = rightTemp->right;
    }

    return std::max(heightLeft, heightRight);
}

void BST::traverseByLevel()
{
    if (this->root == nullptr)
        return;
    std::queue<Node *> queue{};
    queue.push(this->root);
    while (!queue.empty())
    {
        Node *temp = queue.front();
        std::cout << temp->data << " ";
        if (temp->left != nullptr)
            queue.push(temp->left);
        if (temp->right != nullptr)
            queue.push(temp->right);
        queue.pop();
    }
}