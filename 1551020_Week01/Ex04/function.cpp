#include "function.h"
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void point::input(int a, int b) {
  x = a;
  y = b;
}

double point::distance(point b) {
  return sqrt(abs((pow(this->x, 2) - pow(b.x, 2)) + (pow(this->y, 2) - pow(b.y, 2))));
}

void canh::setLength(point a, point b) {
  this->a = a;
  this->b = b;
  length = a.distance(b);
}


double canh::getLength() {
  return this->length;
}

double canh::pythagore(canh a) {
  return sqrt(pow(this->length, 2) + pow(a.length, 2));
}

void tamgiac::setCanh(canh a, canh b, canh c) {
  this->a = a;
  this->b = b;
  this->c = c;
}

string tamgiac::typeOfTriangle() {
  if (a.getLength() == b.getLength() && b.getLength() == c.getLength())
    return "equilateral triangle";
  else if (a.getLength() == b.getLength() || b.getLength() == c.getLength()) {
    if (c.getLength() == a.pythagore(b) || a.getLength() == b.pythagore(c) || b.getLength() == a.pythagore(c)) {
      return "right-angled and isosceles triangle";
    }
    else return "isoceles triangle";
  }
  else if (c.getLength() == a.pythagore(b) || a.getLength() == b.pythagore(c) || b.getLength() == a.pythagore(c)) {
    return "right-angled triangle";
  }
  else return "normal triangle";
}


bool tamgiac::checkBuildable() {
  if ((a.getLength() + b.getLength() >= c.getLength()) && (b.getLength() + c.getLength() >= a.getLength()) && (c.getLength() + a.getLength() >= b.getLength())) {
    return true;
  }
  else return false;
}

double tamgiac::perimeter() {
  return c.getLength() + a.getLength() + b.getLength();
}

double tamgiac::area() {
  double p = (this->perimeter())/ 2;
  return sqrt(p*(p - a.getLength())*(p - b.getLength())*(p - c.getLength()));
}