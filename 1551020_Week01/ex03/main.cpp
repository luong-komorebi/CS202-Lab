#include "function.h"
#include <iostream>
using namespace std;

int main() {
  int a, b;
  point f1, f2;
  cout << "Please enter the first point's x : ";
  cin >> a;
  cout << "Please enter the first point's y : ";
  cin >> b;
  f1.input(a, b);
  cout << "Please enter the second point's x : ";
  cin >> a;
  cout << "Please enter the second point's y : ";
  cin >> b;
  f2.input(a, b);
  cout << "Result : " << f1.distance(f2);
  return 0;
}