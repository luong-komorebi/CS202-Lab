#pragma once


#include <iostream>

using namespace std;

class point {
public:
  void input(int a, int b);
  double distance(point b);
  void display();
private:
  int x;
  int y;
};