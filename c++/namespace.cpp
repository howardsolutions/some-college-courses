#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

// int main()
// {
//     int x = 3;

//     // 1) Namespace not defined, use local value for x
//     // std::cout << x;

//     // 2) use prefix namespace => print 2
//     std::cout << second::x;

//     return 0;
// }

// PRINT: 1
int main()
{
    using namespace first;

    std::cout << x;

    return 0;
}