#pragma once
#include "function.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int i=0, a, b, j;
  float max = 0 ;
  point a2[100], p, furthest;
  ifstream file;
  file.open("input.txt"); 
  while (!file.eof()) {
    file >> a;
    file >> b;
    a2[i].input(a, b);
    i++;
  }
  file.close();
  cout << "Please input point P: x = ";
  cin >> a;
  cout << " y = ";
  cin >> b;
  p.input(a, b);
  j = i - 1;
  while (j > 0) {
    if (p.distance(a2[j]) > max) {
      max = p.distance(a2[j]);
      furthest = a2[j];
    }
    j -= 1;
  }
  cout << "Furthest Point from P is : " <<endl;
  furthest.display();


}