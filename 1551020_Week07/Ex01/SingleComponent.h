
#pragma once
#include"Machine.h"

class SingleComponent :public Machine
{
private:
  string ID;
  float Price;
  float Weight;
public:
  SingleComponent();
  SingleComponent(string, float, float);

  void setID(string);
  string getID();

  void setPrice(float);
  float getPrice();  // virtual

  void setWeight(float);
  float getWeight(); // virtual


};

