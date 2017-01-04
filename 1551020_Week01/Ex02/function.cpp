#include "function.h"
#include <iostream>

using namespace std;

void fraction::input(int a, int b) {
  tu = a;
  mau = b;
}

void fraction::minus(fraction a, fraction b) {
  fraction c;
  c.tu = a.tu * b.mau - a.mau * b.tu;
  c.mau = a.mau * b.mau;
  if (c.tu > 0) {
    cout << "Fraction "<<a.tu<<"/"<<a.mau<<" > Fraction "<<b.tu<<"/"<<b.mau;
  }
  else cout << "Fraction " << a.tu << "/" << a.mau << " < Fraction " << b.tu << "/" << b.mau;

}
int fraction::UCLN(int a, int b) {
  while (b != 0)
  {
    int r = a%b;
    a = b;
    b = r;
  }
  return a;
}
void fraction::reduceFraction(fraction m) {
  m.tu /= UCLN(m.tu, m.mau);
  m.mau /= UCLN(m.tu, m.mau);
}