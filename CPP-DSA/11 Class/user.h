#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User
{
private:
    std::string username{};
    std::string password{};
    double height{};
    double weigth{};
    unsigned int *age{nullptr};

public:
    User() = default;
    User(std::string username, std::string password);
    std::string getUsername();
    unsigned int getAge();
    void setUsername(std::string newUsername);
    void setPassword(std::string newPassword);
    void setAge(unsigned int updatedAge);
    std::string getPassword();
    ~User();
};

#endif