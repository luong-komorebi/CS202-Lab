#include "function.h"
#include <iostream>

using namespace std;
fraction::fraction(void) {
  tu = 0;
  mau = 1;
}

void fraction::input(int a, int b) {
  tu = a;
  mau = b;
}

fraction sum(fraction a, fraction b) {
  fraction c;
  c.tu = a.tu * b.mau + a.mau * b.tu;
  c.mau = a.mau * b.mau;
  return c;

}

void reduceFraction(fraction& m) {
  int a = m.tu;
  m.tu /= UCLN(m.tu, m.mau);
  m.mau /= UCLN(a, m.mau);
}

void fraction::displayFraction() {
  cout << this->tu << "/" << this->mau <<endl;
}

bool compareFraction(fraction a, fraction b) {
  fraction d;
  d.tu = a.tu * b.mau - a.mau * b.tu;
  d.mau = a.mau * b.mau;
  if (d.tu > 0) {
    return true;
  }
  else return false;

}

int UCLN(int a, int b) {
  while (b != 0)
  {
    int r = a%b;
    a = b;
    b = r;
  }
  return a;
}