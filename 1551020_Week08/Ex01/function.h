#pragma once
#include <iostream>
#include <string>
using namespace std;

class DevideByZeroException {
public: 
  char *getErrorString();
};

char* DevideByZeroException::getErrorString() {
  return "Devided by zero";
}

class Fraction {
public: 
  int num;
  int denom; 
  Fraction() {
    num = 0;
    denom = 1;
  }
};

template<class T>
void inputArr(T *a, int& n) {
  a = new T[n];
  for (int i = 0; i < n; ++i) {
    cout << "Input Element " << i + 1 << ":"; 
    cin >> a[i];
  }
}

template<class T>
void outputArr(T *a, int& n) {
  cout << "Output :\n";
  for (int i = 0; i < n; ++i) {
    cout << a[i] << "\t";
  }
  cout << endl;
}

template<class T>
T sumOfElements(T *a, int& n) {
  T sum = a[0];
  for (int i = 1; i < n; ++i) {
    sum += a[i];
  }
  return sum;
}

template<class T>
T findMinimum(T *a, int& n) {
  T min = a[0];
  for (int i = 1; i < n; ++i) {
    if (min > a[i]) {
      min = a[i];
    }

  }
  return min;
}

template<class T>
int findFreq(T *a, T x, int& n) {
  int counter = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] == x)
      counter++;
  }
  return counter;
}

template<> 
void inputArr(Fraction *a, int& n) {
  a = new Fraction[n];
  for (int i = 0; i < n; ++i) {
    cout << "Input Element " << i + 1 << " :";
    try {
      cout << "Input Numerator : ";
      cin >> a[i].num;
      cout << "Input Denominator";
      cin >> a[i].denom;
      if (a[i].denom == 0) throw new DevideByZeroException;
    }
    catch (DevideByZeroException* ex) {
      cout << "ERROR :" << ex->getErrorString() << endl;
    }
  } 
}

template<> 
void inputArr(string *a, int& n) {
  a = new string[n];
  for (int i = 0; i < n; ++i) {
    cout << "Input string : " << i + 1;
    getline(cin, a[i]);
  }
}

ostream& operator <<(ostream& a, const Fraction& f) {
  a << f.num << " / " << f.denom;
  return a;
}

Fraction operator +=(const Fraction& a, const Fraction& b) {
  Fraction temp;
  temp.num = a.num*b.denom + b.num*a.denom;
  temp.denom = a.denom * b.denom;
  return temp;
}
Fraction operator +(const Fraction& a, const Fraction& b) {
  Fraction temp;
  temp.num = a.num*b.denom + b.num*a.denom;
  temp.denom = a.denom * b.denom;
  return temp;
}
bool operator >(const Fraction& a, const Fraction& b) {
  if (((float)a.num / a.denom) > ((float)b.num / b.denom)) return true;
  return false;
}
bool operator ==(const Fraction& a, const Fraction& b) {
  if (((float)a.num / a.denom) == ((float)b.num / b.denom)) return true;
  return false;
}

void input(Fraction &x) {
  cout << "num : ";
  cin >> x.num;
  cout << "Denom : "; 
  cin >> x.denom;
}