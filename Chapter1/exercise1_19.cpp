#include <iostream>

int main(int argc, char const *argv[])
{
    int minorNumber = 0, maxNumber = 0;
    std::cout << "Type 2 numbers to have their range: ";
    std::cin >> minorNumber >> maxNumber;
    if (minorNumber != maxNumber && minorNumber < maxNumber)
    {
        while (minorNumber < maxNumber)
        {
            std::cout << "Range " << minorNumber << " -- " 
                      << maxNumber << std::endl;
            ++minorNumber;
        } 
        
    } else if (minorNumber != maxNumber && minorNumber > maxNumber) {
        while (maxNumber < minorNumber)
        {
            std::cout << "Range " << maxNumber << " -- " 
                      << minorNumber << std::endl;
            ++maxNumber;
        }
        
    } else std::cout << "The Numbers are equal, the Range is the number itself: "
                     << maxNumber;
    
    return 0;
}
