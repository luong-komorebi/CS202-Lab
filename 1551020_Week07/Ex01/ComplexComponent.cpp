#include "ComplexComponent.h"



ComplexComponent::ComplexComponent()
{
  ID = "";
  Price = 0;
  Weight = 0;
  setType(1);
}

ComplexComponent::ComplexComponent(string tempID, float tempPrice, float tempWeight)
{
  ID = tempID;
  Price = tempPrice;
  Weight = tempWeight;
  setType(1);
}

void ComplexComponent::setID(string tempID)
{
  ID = tempID;
}

string ComplexComponent::getID()
{
  return ID;
}

void ComplexComponent::setPrice(float tempPrice)
{
  Price = tempPrice;
}

float ComplexComponent::getPrice()
{
  return Price;
}

void ComplexComponent::setWeight(float tempWeight)
{
  Weight = tempWeight;
}

float ComplexComponent::getWeight()
{
  return Weight;
}



