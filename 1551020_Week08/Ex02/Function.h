#pragma once

#include<iostream>
#include<string>
using namespace std;

template<class TYPE>
class Array
{
private:
  TYPE *a;
  int n;
public:
  void input();
  void output();
  ~Array() {
    delete[] a;
  }
  TYPE sum();
  TYPE findMin();
  void devideX(TYPE x);
  TYPE & operator []( const int pos);
};


template<class TYPE>
TYPE& Array<TYPE>::operator [](int pos) {
  return a[pos];
}


template<class TYPE>
void Array<TYPE>::input() {
  cout << "Input N = ";
  cin >> n;
  cout << endl;
  cin.ignore();
  a = new TYPE[n];
  for (int i = 0; i < n; ++i) {
    cout << "Element " << i + 1 << ": ";
    cin >> a[i];
  }
}
template<class TYPE>
void Array<TYPE>::output() {
  for (int i = 0; i < n; ++i) {
    cout << a[i] << "\t";
  }
  cout << endl;
}
template<class TYPE>
TYPE Array<TYPE>::sum() {
  TYPE tempSum = a[0];
  for (int i = 1; i < n; ++i) {
    tempSum = tempSum + a[i];
  }
  return tempSum;
}
template<class TYPE>
TYPE Array<TYPE>::findMin() {
  TYPE min = a[0];
  for (int i = 1; i < n; ++i) {
    if (a[i] < min) min = a[i];
  }
  return min;
}
template<class TYPE>
void Array<TYPE>::devideX(TYPE x) {
  for (int i = 0; i < n; ++i) {
    a[i] = a[i] / x;
  }
}

struct Fraction {
  int nu, de;
  Fraction() {
    nu = 0;
    de = 1;
  }
};
istream& operator >> (istream& a, Fraction &f) {
  cout << "Input Numerator: ";
  a >> f.nu;
  cout << "Input Denumerator: ";
  a >> f.de;
  if (f.de == 0) throw "Denomirator can not be Zero !!! \n";
  return a;
}
ostream& operator <<(ostream& a, const Fraction& f) {
  a << f.nu << " / " << f.de;
  return a;
}
Fraction operator +=(const Fraction& a, const Fraction& b) {
  Fraction temp;
  temp.nu = a.nu*b.de + b.nu*a.de;
  temp.de = a.de * b.de;
  return temp;
}
Fraction operator +(const Fraction& a, const Fraction& b) {
  Fraction temp;
  temp.nu = a.nu*b.de + b.nu*a.de;
  temp.de = a.de * b.de;
  return temp;
}
Fraction operator /(const Fraction& a, const Fraction& b) {
  Fraction temp;
  temp.nu = a.nu*b.de;
  temp.de = a.de*b.nu;
  return temp;
}
bool operator <(const Fraction& a, const Fraction& b) {
  if (((float)a.nu / a.de) < ((float)b.nu / b.de)) return true;
  return false;
}
bool operator ==(const Fraction& a, const Fraction& b) {
  if (((float)a.nu / a.de) == ((float)b.nu / b.de)) return true;
  return false;
}

