#include <iostream>

// work like an alias
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{

    text_t firstName = "Howard";
    number_t age = 24;

    std::cout << firstName << '\n';
    std::cout << age;

    return 0;
};