#pragma once
#include "function.h"
#include <iostream>
#include <math.h>
using namespace std;

void point::input(int a, int b) {
  x = a;
  y = b;
}

double point::distance(point b) {
  return sqrt(abs((pow(this->x, 2) - pow(b.x, 2)) + (pow(this->y, 2) - pow(b.y, 2))));
}

void point::display() {
  cout << this->x << "," << this->y;
}