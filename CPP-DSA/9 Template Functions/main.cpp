#include <iostream>
#include <string>
#include <type_traits>

// Default template format
template <typename T>
T print(T &a, T &b)
{
    if constexpr (std::is_same_v<T, std::string>)
    {
        return a + " " + b;
    }
    else if constexpr (std::is_same_v<T, float>)
    {
        return (++a) * 100 + b;
    }
    return a + b;
}

// Specialization
template <>
std::string print<std::string>(std::string &a, std::string &b)
{
    return (a + b == "HelloWorld" ? "HECK YEAH" : "NOPERS");
}

int main(int argc, char **argv)
{
    std::string sCompA{};
    std::string sCompB{};

    float fCompA{};
    float fCompB{};

    std::cout << "Enter string component A: ";
    std::getline(std::cin >> std::ws, sCompA);

    std::cout << "Enter string component B: ";
    std::getline(std::cin >> std::ws, sCompB);

    std::cout << "Enter float component A: ";
    std::cin >> fCompA;

    std::cout << "Enter float component B: ";
    std::cin >> fCompB;

    // THREE METHODS FOR LAMBDA
    /*
    auto checker = [](float a, float b) -> bool
    {
        return (a > b);
    };
    */
    /*
     [](float a, float b) -> bool
     { return (a > b); }(fCompA, fCompB)
                                 ? std::cout << "String (A,B): " << print(sCompA, sCompB) << std::endl
                                 : std::cout << std::endl;
    */

    auto value = [](float a, float b)
    {
        return (a > b);
    };

    // value(fCompA, fCompB) ? std::cout << "String (A,B): " << print(sCompA, sCompB) << std::endl : std::cout << std::endl;
    std::cout << "String (A,B): " << print(sCompA, sCompB) << std::endl;
    // std::cout << "Float (A,B): " << print(fCompA, fCompB) << std::endl;
    value(fCompA, fCompB) ? std::cout << "Float (A,B): " << print<float>(fCompA, fCompB) << std::endl : std::cout << std::endl;
    std::cout << "sCompA and sCompB: " << sCompA << ", " << sCompB << std::endl;
    std::cout << "fCompA and fCompB: " << fCompA << ", " << fCompB << std::endl;
    return 0;
}