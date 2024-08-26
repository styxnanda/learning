#include <iostream>
#include <string>
#include <exception>
#include "list.h"

void printMenu()
{
    std::cout << "MENU" << std::endl;
    std::cout << "1. Append node at the end" << std::endl;
    std::cout << "2. Append node at the beginning" << std::endl;
    std::cout << "3. Append node to a position" << std::endl;
    std::cout << "4. Delete node" << std::endl;
    std::cout << "5. Reverse list" << std::endl;
    std::cout << "11. Print Node" << std::endl;
    std::cout << "12. Exit Program" << std::endl;
}

int main()
{
    int menuChoice{0};
    std::string msgInput{};
    int *positionChoice = new int{};
    Node *addressNode{nullptr};

    LinkedList *list = new LinkedList();
    std::cout << "LINKED LIST CREATED!" << std::endl;
    while (menuChoice != 12)
    {
        printMenu();
        std::cout << "Choice: ";
        std::cin >> menuChoice;
        switch (menuChoice)
        {
        case 1:
            std::cout << "Enter message: ";
            std::getline(std::cin >> std::ws, msgInput);
            list->addNode(msgInput);
            break;
        case 2:
            std::cout << "Enter message: ";
            std::getline(std::cin >> std::ws, msgInput);
            list->addPrefixNode(msgInput);
            break;
        case 3:
            std::cout << "Enter message: ";
            std::getline(std::cin >> std::ws, msgInput);
            std::cout << "Enter position: ";
            std::cin >> *positionChoice;
            list->addNodeToPosition(*positionChoice, msgInput);
            break;
        case 4:
            std::cout << "Enter position: ";
            std::cin >> *positionChoice;
            list->deleteNode(*positionChoice);
            break;
        case 5:
            list->reverseList();
            break;
        case 11:
            list->traversePrint();
            break;
        case 12:
            std::cout << "GOODBYE!" << std::endl;
            break;
        default:
            std::cout << "ERROR {Ensure correct menu is chosen}" << std::endl;
            continue;
        }
    }

    delete positionChoice;
    delete list;
    return 0;
}