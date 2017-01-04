#include "Rectangle.h"
#include "iostream"
using namespace std;


Rectangle::Rectangle()
{
  a = b = 1;
}

Rectangle::Rectangle(const float& a, const float& b) {
  this->a = a;
  this->b = b;
}

float Rectangle::perimeter() {
  return 2 * (a + b);
}

float Rectangle::area()
{
  return a*b;
}

void  Rectangle::Display() {
  cout << "\n a = " << a;
  cout << "\n b = " << b;
  cout << "\n Perimeter of rectangle: " << perimeter();
  cout << "\n Area of rectangle: " << area();
}
Rectangle::~Rectangle() {

}