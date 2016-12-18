#pragma once


#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Machine
{
protected:
  bool type; // 0. Single Com    1.Complex Com
  vector<Machine*>Components;
public:
  void Input();
  void helpInput(bool&, string&, float&, float&);

  float sumPrice();
  float sumWeight();

  void setType(bool);
  float getType();

  void print();

  virtual string getID();
  virtual float getPrice();
  virtual float getWeight();
};

