#pragma once
#include "Shape.h"
class Triangle : public Shape
{
private: 
  float a, b, c;
public:
  Triangle();
  Triangle(const float& a, const float& b, const float& c);
  float perimeter();
  float area();
  void Display();
  ~Triangle();
};

