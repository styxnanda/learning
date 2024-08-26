#include <iostream>
#include "bst.h"

int main()
{
    BST Tree{BST()};

    Tree.traverseInOrder();

    Tree.insert(100);
    Tree.insert(200);
    Tree.insert(300);
    Tree.insert(20);
    Tree.insert(10);
    Tree.insert(30);
    Tree.insert(150);

    Tree.traverseInOrder();

    /*
    auto searchRes1 = Tree.search(0);
    auto searchRes2 = Tree.search(10);
    auto searchRes3 = Tree.search(11);

    (searchRes1) ? std::cout << "0 found!" << std::endl : std::cout << "0 not found" << std::endl;
    (searchRes2) ? std::cout << "10 found!" << std::endl : std::cout << "10 not found" << std::endl;
    (searchRes3) ? std::cout << "11 found!" << std::endl : std::cout << "11 not found" << std::endl;

    std::cout << "Minimum number in BST: " << Tree.findMinimum() << std::endl;
    std::cout << "Maximum number in BST: " << Tree.findMaximum() << std::endl;
    std::cout << "Height of BST from root: " << Tree.getHeight() << std::endl;
    */

    Tree.traversePreOrder();
    Tree.traversePostOrder();
    return 0;
}