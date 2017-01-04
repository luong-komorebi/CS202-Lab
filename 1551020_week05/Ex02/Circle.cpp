#include "Circle.h"
#include <iostream>
using namespace std;


Circle::Circle()
{
  r = 1;
}

Circle::Circle(const float& r) {
  this->r = r;
}

float Circle::perimeter() {
  return 2*3.14*r;
}
float Circle::area() {
  return r*r*3.14;
}
void Circle::Display()
{
  std::cout << "\n Radius: " << r;
  std::cout << "\n Perimeter of Circle: " << perimeter();
  std::cout << "\n Area of Circle: " << area();
}
Circle::~Circle()
{

}
