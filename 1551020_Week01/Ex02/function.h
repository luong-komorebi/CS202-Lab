#pragma once 

#include <iostream>

using namespace std;

class fraction {
public:
  void input(int a, int b);
  void minus(fraction a, fraction b);
  void reduceFraction(fraction m);
  int UCLN(int a, int b);
private:
  int tu;
  int mau;
};