#include <iostream>

int main(int argc, char const *argv[])
{
    int sum = 0, val = 1;
    // keep execunting the while as long as val 
    // is less than or equal to 10

    while (val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}
