#pragma once
#include <iostream>


using namespace std;

class CItem {
protected :
  string name;
  int size;
  string type;
  bool hiddenOrNot;

public : 
  virtual int getSize() = 0;
  virtual string getType() = 0;
  virtual string getName() = 0;
  virtual void print(const int& arg) = 0;
  virtual void setHidden(bool a, bool b) = 0;
};  