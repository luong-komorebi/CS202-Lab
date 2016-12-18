
#pragma once
#include"Machine.h"
class ComplexComponent :public Machine
{
private:
  string ID;
  float Price;
  float Weight;
public:
  ComplexComponent();
  ComplexComponent(string, float, float);

  void setID(string);
  string getID(); // virtual

  void setPrice(float);
  float getPrice();  // virtual

  void setWeight(float);
  float getWeight(); // virtual
};

