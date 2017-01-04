#include "Machine.h"
#include"SingleComponent.h"
#include"ComplexComponent.h"



string Machine::getID()
{
  return string();
}

float Machine::getPrice()
{
  return 0.0f;
}

float Machine::getWeight()
{
  return 0.0f;
}

void Machine::Input()
{
  bool in = 0, tempType;
  string tempID;
  float tempPrice, tempWeight;
  do {
    helpInput(tempType, tempID, tempPrice, tempWeight);
    switch (tempType) {
    case 0: {
      Components.push_back(new SingleComponent(tempID, tempPrice, tempWeight));
      break;
    }
    case 1: {
      Components.push_back(new ComplexComponent(tempID, tempPrice, tempWeight));
      break;
    }
    }
    cout << "Do you want to add more components: (1:yes / 0:No ): ";
    cin >> in;
  } while (in == 1);
}

void Machine::helpInput(bool &tempType, string &tempID, float &tempP, float &tempW)
{
  cout << "Which Components ,Single or Complex ? (0 / 1): ";
  cin >> tempType;
  cin.ignore(); // clear keyboard buffer
  cout << "ID: ";
  getline(cin, tempID);
  cout << "Price: ";
  cin >> tempP;
  cout << "Weight: ";
  cin >> tempW;
}

float Machine::sumPrice()
{
  float tempSum = 0;
  for (int i = 0; i < Components.size(); ++i) {
    tempSum += Components[i]->getPrice();
  }
  return tempSum*2.0;
}

float Machine::sumWeight()
{
  float tempSum = 0;
  for (int i = 0; i < Components.size(); ++i) {
    tempSum += Components[i]->getWeight();
  }
  return tempSum;
}

void Machine::setType(bool tempType)
{
  type = tempType;
}

float Machine::getType()
{
  return type;
}

void Machine::print()
{
  for (int i = 0; i < Components.size(); ++i) {
    cout << Components[i]->getType();
  }
}



