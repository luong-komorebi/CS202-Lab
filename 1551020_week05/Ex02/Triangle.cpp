#include "Triangle.h"
#include <iostream>
#include <math.h>
using namespace std;

Triangle::Triangle()
{
  a = b = c = 1;
}


Triangle::~Triangle()
{
}

Triangle::Triangle(const float& a, const float& b, const float& c) {
  this->a = a;
  this->b = b;
  this->c = c;  
}

float Triangle::perimeter() {
  return (a + b + c);
}
float Triangle::area() {
  float p12 = perimeter() / 2;
  return (sqrt(p12*(p12 - a)*(p12 - b)*(p12 - c)));
}


void Triangle::Display()
{
  cout << "\n a = " << a;
  cout << "\n b = " << b;
  cout << "\n c = " << c;
  cout << "\n Perimeter of Triangle: " << perimeter();
  cout << "\n Area of Triangle: " << area();
}