#include <iostream>
#include <string>
#include <iomanip>

// Refresher of references and pointers

void printSome(std::string *p, std::string nonp)
{
    std::cout << "Address of string being pointed: " << p << std::endl;
    std::cout << "Address of nonp: " << &nonp << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "String p: " << *p << std::endl;
    std::cout << "String nonp: " << nonp << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    // Change string pointer
    *p = "Hello";
    std::cout << "String p: " << *p << std::endl;
    std::cout << "String nonp: " << nonp << std::endl;
    std::cout << "------------------------------------------" << std::endl;
}

int main()
{
    std::string name{};
    std::string &ref_name{name};

    // Ask for input
    std::cout << "Enter name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Name: " << name << std::endl;
    std::cout << "Referenced Name: " << ref_name << std::endl;
    std::cout << "&Name: " << &name << std::endl;
    std::cout << "&Referenced Name: " << &ref_name << std::endl;

    printSome(&name, name);

    std::cout << "String name after function: " << name << std::endl;

    return 0;
}