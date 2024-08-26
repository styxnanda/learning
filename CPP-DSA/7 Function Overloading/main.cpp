#include <iostream>
#include <string>
#include "functions.h"

int main()
{
    int age{};
    std::string firstName{};
    std::string lastName{};
    std::string greeting{};

    std::cout << "Enter first name: ";
    std::getline(std::cin >> std::ws, firstName);

    std::cout << "Enter last name: ";
    std::getline(std::cin >> std::ws, lastName);

    std::cout << "Enter age: ";
    std::cin >> age;

    print(firstName);
    print(lastName);

    auto fullName = print(firstName, lastName);

    concat(firstName, lastName);

    print(firstName);

    createGreeting(greeting, "Hello,", firstName);

    // print(firstName);
    print(greeting);

    auto ageTeller = print(fullName, age);

    std::cout << "Full name: " << fullName << ", Age Teller: " << ageTeller << std::endl;

    ageTeller += 2;
    std::cout << "Full name: " << fullName << ", Age Teller: " << ageTeller << std::endl;

    ageTeller *= 4;
    std::cout << "Full name: " << fullName << ", Age Teller: " << ageTeller << std::endl;

    ageTeller /= 5.0;
    std::cout << "Full name: " << fullName << ", Age Teller: " << static_cast<double>(ageTeller) << std::endl;

    ageTeller %= 4;
    std::cout << "Full name: " << fullName << ", Age Teller: " << ageTeller << std::endl;

    return 0;
}