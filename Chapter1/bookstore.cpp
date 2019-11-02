#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;

    std::cout << "Enter two numbers: (multiplication)" << std::endl;
    float v3 = 0, v4 = 0;
    std::cin >> v3 >> v4;
    std::cout << "The multiplication of " << v3 << " and " << v4
              << " is " << v3 * v4 << std::endl;

    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    return 0;
}
