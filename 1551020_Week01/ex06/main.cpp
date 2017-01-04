#pragma once
#include "function.h"
#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  date d1, d2;
  cout << "Please enter the current day : ";
  cin >> a;
  cout << "Please enter the current month : ";
  cin >> b;
  cout << "Please enter the current year : ";
  cin >> c;
  d1.input(a, b, c);
  cout << "Please enter another day : ";
  cin >> a;
  cout << "Please enter another month : ";
  cin >> b;
  cout << "Please enter another year : ";
  cin >> c;
  d2.input(a, b, c);
  cout<< " Distance between 2 dates : " << d1.dateDistance(d2);
  return 0;
}