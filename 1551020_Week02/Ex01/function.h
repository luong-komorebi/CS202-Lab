#pragma once 

#include <iostream>
using namespace std;

class fraction {
public:
  fraction::fraction(void);
  void input(int a, int b);
  friend fraction sum(fraction a, fraction b);
  friend void reduceFraction(fraction& m);
  friend int UCLN(int a, int b);
  friend bool compareFraction(fraction a, fraction b);
  void displayFraction();


private:
  int tu;
  int mau;
};