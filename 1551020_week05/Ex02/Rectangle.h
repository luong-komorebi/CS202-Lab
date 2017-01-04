#pragma once
#include "Shape.h"
class Rectangle: public Shape
{
private:
  float a, b;
public:
  Rectangle();
  Rectangle(const float& a, const float& b);
  float perimeter();
  float area();
  void Display();
  ~Rectangle();
};

