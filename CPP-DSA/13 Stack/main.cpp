#include <iostream>
#include <string>
#include "stack.h"

void printMenu();

int main()
{
    int menuChoice{-1};
    std::string dataInput{};
    Stack *s{new Stack()};
    std::cout << "STACK CREATED!" << std::endl;

    while (menuChoice != 0)
    {
        printMenu();
        std::cout << "Enter choice: ";
        std::cin >> menuChoice;

        switch (menuChoice)
        {
        case 1:
            std::cout << "Enter message: ";
            std::getline(std::cin >> std::ws, dataInput);
            s->push(dataInput);
            break;
        case 2:
            s->pop();
            break;
        case 3:
            std::cout << (s->isEmpty() ? "EMPTY" : "NOT EMPTY") << std::endl;
            break;
        case 4:
            s->viewTop();
            break;
        case 5:
            s->display();
            break;
        case 0:
            break;
        default:
            std::cout << "ERROR {CHECK IF MENU OPTION IS VALID}" << std::endl;
            break;
        }
    };

    delete s;
    return 0;
}

void printMenu()
{
    std::cout << std::endl
              << "----------MENU----------" << std::endl;
    std::cout << "1. Push data into stack" << std::endl;
    std::cout << "2. Pop data out of stack" << std::endl;
    std::cout << "3. Check if stack empty or not" << std::endl;
    std::cout << "4. Peek into the top of stack" << std::endl;
    std::cout << "5. Display stack" << std::endl;
    std::cout << "0. Exit stack" << std::endl;
}