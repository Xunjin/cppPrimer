#include <iostream>

int main(int argc, char const *argv[])
{
    int minrange = 0, maxrange = 0;
    std::cout << "Inform the minor number: ";
    std::cin >> minrange;
    std::cout << "\nInform the max number: ";
    std::cin >> maxrange;

    while (minrange <= maxrange)
    {
        std::cout << "MinRange: " << minrange << " -- ";
        std::cout << "MaxRange: " << maxrange << std::endl;
        ++minrange;   
    }
    
    return 0;
}
