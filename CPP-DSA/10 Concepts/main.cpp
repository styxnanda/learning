#include <iostream>
#include <type_traits>
#include <concepts>
#include <cmath>

// Custom Concepts
// 1. Checking parameter is floating point
template <typename T>
concept isFloat = std::is_floating_point_v<T>;

// 2. Checking parameter is a square series number
template <typename T>
concept isSquareConstraint = requires(T a) {
    std::pow(2, std::log2(a));
};

template <typename T>
T isSquare(T number)
    requires isSquareConstraint<T>
{
    return (((std::pow(2, std::floor(std::log2(number))))) == number);
}

// Syntax 1
/*
template <typename T>
    requires std::floating_point<T>
T multiply(T a, T b)
{
    return a * b;
}
*/

// Syntax 2
/*
template <std::floating_point T>
T multiply(T a, T b)
{
    return a * b;
}
*/

// Syntax 3
/*
auto multiply(std::floating_point auto a, std::floating_point auto b)
{
    return a * b;
}
*/

// Syntax 4
template <typename T>
T multiply(T a, T b)
    requires isFloat<T>
{
    return a * b;
}

int main()
{
    float f1{};
    // float f2{};
    std::cin >> f1;
    // std::cin >> f2;
    // std::cout << multiply(f1, f2) << std::endl;
    std::cout << std::boolalpha << "Number " << f1 << " is square? " << isSquare(f1);
    return 0;
}