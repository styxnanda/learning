#include <iostream>
#include "user.h"

void printUserDetails(User &user)
{
    std::cout << "address: " << &user << " | username: " << user.getUsername() << " | password: " << user.getPassword() << " | age: " << user.getAge() << std::endl;
}

int main()
{
    User user1{User("Default", "hashingDefault")};
    User user2{User("JohnDoe", "hashed")};
    std::cout << "User 1 original address: " << &user1 << std::endl;
    std::cout << "User 2 original address: " << &user2 << std::endl;

    // User *users[]{&user1, &user2};
    User **usersHeap = new User *[]
    { &user1, &user2 };
    std::cout << "Array address: " << usersHeap << std::endl;

    user2.setUsername("MarshallBigsby");
    user1.setAge(49);
    user1.setUsername("OldGuy");
    /*
    for (size_t i{0}; i < 2; i++)
    {
        std::cout << (i + 1) << ". address: " << users[i] << " | username: " << users[i]->getUsername() << " | password: " << users[i]->getPassword() << " | age: " << users[i]->getAge() << std::endl;
    }
    */

    /*
     for (size_t i{}; i < 2; i++)
     {
         std::cout << (i + 1) << ". address: " << usersHeap[i] << " | username: " << usersHeap[i]->getUsername() << " | password: " << usersHeap[i]->getPassword() << " | age: " << usersHeap[i]->getAge() << std::endl;
     }
    */

    for (size_t i{}; i < 2; i++)
    {
        std::cout << i + 1 << ". ";
        printUserDetails(*usersHeap[i]);
    }
    delete[] usersHeap;
    usersHeap = nullptr;

    return 0;
}