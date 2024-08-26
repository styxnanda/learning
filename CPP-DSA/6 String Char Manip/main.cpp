#include <iostream>
#include <cstring>
#include <string>

std::string returnString(std::string holy)
{
    return holy + ", you're HIM!";
}

int main()
{
    /*
    char *string1 = new char[50]{"Hello World!"};
    char *string2 = new char[50]{"Oh my!"};
    char *dest = new char[strlen(string1) + strlen(string2) + 1]; // Add null for C-string

    std::cout << string1 << std::endl;
    std::cout << string2 << std::endl;
    std::strcpy(dest, std::strcat(string2, string1));
    std::cout << dest << std::endl;

    delete[] string1;
    delete[] string2;
    delete[] dest;
    */

    std::string first{"Bruce"};
    std::string last{"Wayne"};

    std::string fullName{first + " " + last};

    std::cout << "First Name: " << first << std::endl;
    std::cout << "Last Name: " << last << std::endl;
    std::cout << "Full Name: " << fullName << std::endl;
    if (!fullName.compare("Bruce Wayne"))
    {
        std::cout << "Is Bruce" << std::endl;
    }
    else
    {
        std::cout << "Not Bruce" << std::endl;
    };
    std::cout << returnString(fullName) << std::endl;
    return 0;
}