#include <iostream>
#include <cmath>

struct User
{
    int id{};
    std::string username{};
    std::string password{};
};

int main()
{
    User user1{.id{1}, .username{"danielar"}, .password{"hashed"}};
    User user2{.id{5}, .username{"satyaand"}, .password{"hashedAF"}};
    User users[]{user1, user2};

    /*
    int samples[]{1, 2, 5, 7, 8, 16, 512, 1099};
    auto squarer = [](int number)
    {
        return ((std::pow(2, static_cast<int>(std::log2(number))) == number) ? "Yes" : "Nope");
    };

    for (int sample : samples)
    {
        std::cout << "Value: " << sample << ", Square: " << squarer(sample) << std::endl;
    }
    */

    std::cout << "----DATABASE----" << std::endl;
    [&users]()
    {
        for (User &user : users)
        {
            user.id += 100;
            std::cout << "User ID: " << user.id << ", Username: " << user.username << ", Password: " << user.password << std::endl;
        };
    }();

    return 0;
}