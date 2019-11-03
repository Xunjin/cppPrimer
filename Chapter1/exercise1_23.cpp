#include "Sales_item.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Sales_item currItem, item;
  if (std::cin >> currItem) {
    int counter = 1;
    while (std::cin >> item) {
      if (item.isbn() == currItem.isbn())
        ++counter;
      else {
        std::cout << currItem.isbn() << " appears " << counter << " times"
                  << std::endl;
        currItem = item;
        ++counter;
      }
    }
    std::cout << currItem.isbn() << " appears " << counter << " times"
              << std::endl;
  }

  return 0;
}
