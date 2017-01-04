#pragma once
class Shape
{
public:
  Shape();
  ~Shape();
  virtual float perimeter() = 0;
  virtual float area() = 0;
  virtual void Display() = 0;



};

