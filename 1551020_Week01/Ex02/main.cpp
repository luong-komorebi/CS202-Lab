#include "function.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int a, b, c, d;
  fraction f1, f2;
  ifstream file;
  file.open("input.txt");
  while (!file.eof()) {
    file >> a;
    file >> b;
    f1.input(a, b);
    file >> c;
    file >> d;
    f2.input(c, d);
  }
  file.close();
  f1.minus(f1, f2);
  return 0;
}