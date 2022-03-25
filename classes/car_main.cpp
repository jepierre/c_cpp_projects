#include <iostream>

#include "car.h"

int main() {
  Car toyota("Toyota", 2, 4);
  std::cout << "My car make: " << toyota.make << std::endl;
  std::cout << "My car size: " << toyota.size << std::endl;
  std::cout << "My car speed: " << toyota.speed << std::endl;
  return 0;
}