#include "user.h"

User::User(std::string username, std::string password)
{
    this->username = username;
    this->password = password;
    this->age = new unsigned int;
    *age = 18;
}

std::string User::getUsername()
{
    return this->username;
}

unsigned int User::getAge()
{
    return *(this->age);
}

void User::setUsername(std::string newUsername)
{
    this->username = newUsername;
}

void User::setPassword(std::string newPassword)
{
    this->password = newPassword;
}

void User::setAge(unsigned int updatedAge)
{
    *(this->age) = updatedAge;
}

std::string User::getPassword()
{
    return this->password;
}

User::~User()
{
    delete age;
    std::cout << "deconstruct ";
}