#include <iostream>

int main(int argc, char const *argv[])
{
    int sum = 50, val = 1;
    while (sum < 100)
    {
        sum += val;
    }
    std::cout << "The sum is " << sum << " !!!" << std::endl;
    return 0;
}
