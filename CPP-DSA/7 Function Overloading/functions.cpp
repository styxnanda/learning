#include <iostream>
#include <string>
#include "functions.h"

void print(std::string buffer)
{
    std::cout << buffer << std::endl;
}

std::string print(std::string buffer1, std::string buffer2)
{
    return buffer1 + " " + buffer2;
}

int print(std::string &buffer, int &n)
{
    buffer = buffer + " (AGE MODIFIED)";
    return ++n;
}

void concat(std::string &dest, std::string source)
{
    dest = dest + " " + source;
}

void createGreeting(std::string &dest, std::string s1, std::string s2)
{
    dest = s1 + " " + s2;
}