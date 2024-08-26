#ifndef BST_H
#define BST_H

class Node
{
public:
    int data;
    Node *left;
    Node *right;

public:
    Node();
    Node(int);
};

class BST
{
public:
    Node *root;

public:
    BST();
    void insert(int);
    void traverseInOrder();
    void traversePreOrder();
    void traversePostOrder();
    bool search(int);
    int findMinimum();
    int findMaximum();
    int getHeight();
    void traverseByLevel();
};

#endif