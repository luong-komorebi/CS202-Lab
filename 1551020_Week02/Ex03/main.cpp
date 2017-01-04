#pragma once
#include "function.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
  int a, b, equilateral_triangle = 0, right_angled_and_isosceles_triangle = 0, isoceles_triangle = 0, right_angled_triangle = 0, obtuse_triangle = 0, acute_triangle = 0, not_valid_triangle = 0, total_triangle = 0;
  canh sampleCanh1, sampleCanh2, sampleCanh3;
  tamgiac sampleTamGiac;
  string checkTamGiac;
  point x, y;
  ifstream file;
  file.open("input.txt");
  while (!file.eof()) {
    file >> a;
    file >> b;
    x.input(a, b);
    file >> a;
    file >> b;
    y.input(a, b);
    sampleCanh1.setLength(x, y);
    file >> a;
    file >> b;
    x.input(a, b);
    file >> a;
    file >> b;
    y.input(a, b);
    sampleCanh2.setLength(x, y);
    file >> a;
    file >> b;
    x.input(a, b);
    file >> a;
    file >> b;
    y.input(a, b);
    sampleCanh3.setLength(x, y);
    sampleTamGiac.setCanh(sampleCanh1, sampleCanh2, sampleCanh3);
    if (sampleTamGiac.checkBuildable() == true) {
      if (checkTamGiac == "equilateral triangle")
        equilateral_triangle += 1;
      else if (checkTamGiac == "right-angled and isosceles triangle")
        right_angled_and_isosceles_triangle += 1;
      else if (checkTamGiac == "isoceles triangle")
        isoceles_triangle += 1;
      else if (checkTamGiac == "right-angled triangle")
        right_angled_triangle += 1;
      else if (checkTamGiac == "obtuse triangle")
        obtuse_triangle += 1;
      else acute_triangle += 1;
    }
    else not_valid_triangle += 1;
    total_triangle += 1;
  }
  file.close();
  cout << " total triangles: \t" << total_triangle << endl;
  cout << "equilateral triangle : \t" << equilateral_triangle << endl;
  cout << "right-angled and isosceles triangle : \t" << right_angled_and_isosceles_triangle << endl;
  cout << "isoceles triangle: \t" << isoceles_triangle << endl;
  cout << "right-angled triangle: \t" << right_angled_triangle << endl;
  cout << "obtuse triangle: \t" << obtuse_triangle << endl;
  cout << "acute triangle: \t" << acute_triangle << endl;
  cout << "Not a valid triangle: \t" << not_valid_triangle << endl;
  return 0;
}