#pragma once 

#include <iostream>
#include <string>
using namespace std;

class point {
public:
  void input(int a, int b);
  double distance(point b);
private:
  int x;
  int y;
};
class canh {
public:
  void setLength(point a, point b);
  double getLength();
  double pythagore(canh a);
private:
  double length;
  point a, b;
};

class tamgiac {
public:
  void setCanh(canh a, canh b, canh c);
  string typeOfTriangle();
  bool checkBuildable();
  double perimeter();
  double area();
private:
  canh a, b, c;
};