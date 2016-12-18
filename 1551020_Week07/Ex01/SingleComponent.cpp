#include "SingleComponent.h"



SingleComponent::SingleComponent()
{
  ID = "";
  Price = 0;
  Weight = 0;
  setType(0);
}

SingleComponent::SingleComponent(string tempID, float tempPrice, float tempWeight)
{
  ID = tempID;
  Price = tempPrice;
  Weight = tempWeight;
  setType(0);
}

void SingleComponent::setID(string tempID)
{
  ID = tempID;
}

string SingleComponent::getID()
{
  return ID;
}

void SingleComponent::setPrice(float tempPrice)
{
  Price = tempPrice;
}

float SingleComponent::getPrice()
{
  return Price;
}

void SingleComponent::setWeight(float tempWeight)
{
  Weight = tempWeight;
}

float SingleComponent::getWeight()
{
  return Weight;
}

