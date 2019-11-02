#include <iostream>

int main(int argc, char const *argv[])
{
    int value = 10;
    while (value >= 0)
    {
        std::cout << "Value is " << value << std::endl;
        --value;
    }
    
    return 0;
}
