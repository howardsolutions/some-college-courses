#include <iostream>

// 1) Staring

// int main()
// {
//     std::cout << "I like coke" << '\n';
//     std::cout << "I like BLABLA" << std::endl;
//     return 0;
// }

// 2) Variables and basic data types
int main()
{
    // INTEGER
    
    int num1 = 5;
    int num2 = 6;

    std::cout << num1 + num2 << '\n'; 

    // DOUBLE (Including decimal)
    double price = 10.12;
    double gpa = 3.9;
    double temp = -13.2;

    // Single character CHAR CAN ONLY STORE ONE SINGLE CHAR
    char grade = 'A';
    char fas = 'B';

    // std::cout << grade;

    // BOOLEAN (TRUE FALSE)
    bool power = true;
    bool student = false;

    // STRING (Objects that represents a sequence of text)
    std::string name = "Howard";

    std::cout << "Hello " << name;

    return 0;
}