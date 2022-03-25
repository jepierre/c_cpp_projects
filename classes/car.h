#ifndef CAR_H
#define CAR_H
#include <string>

class Car {
 public:
  Car(std::string, float, float);

  std::string make;
  float size;
  float speed;

 private:
};

#endif  // CAR_H