#include "fucntion.h"
#include <iostream>
using namespace std;

int main() {
  int a, b;
  fraction f1, f2;
  cout << "Please enter the first fraction's numerator : ";
  cin >> a; 
  cout << "Please enter the first fraction's denominator : ";
  cin >> b;
  f1.input(a, b);
  cout << "Please enter the second fraction's numerator : ";
  cin >> a;
  cout << "Please enter the second fraction's denominator : ";
  cin >> b;
  f2.input(a, b);
  cout << "Result : ";
  f1.sum(f1, f2);
  return 0;
}