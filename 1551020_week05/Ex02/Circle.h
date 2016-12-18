#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
  float r;
public:
  Circle();
  Circle(const float& r);
  float perimeter();
  float area();
  void Display();
  ~Circle();
};

