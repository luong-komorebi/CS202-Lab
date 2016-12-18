#include "Function.h"

int main() {
  int selection;
  unsigned short type;
  cout << "Choose type:" << endl;
  cout << "1. Array of integer numbers." << endl;
  cout << "2. Array of float numbers." << endl;
  cout << "3. Array of fractions." << endl;
  cin >> type;
  switch (type)
  {
  case 1: {
    Array<int> a;
    int m;
    a.input();
    a.output();
    cout << endl;
    cout << "Sum: " << a.sum() << endl;
    cout << "Min: " << a.findMin() << endl;
    cout << "Input an position to get and set element : " << endl;
    cin >> selection;
    cout << "Get the element : " << a[selection] << endl;
    cout << "Set the element to ? " << endl;
    cin >> m;
    cout << "Set done!" << endl;
    a[selection] = m;
    cout << "Input X to devide: ";
    int x; cin >> x;
    a.devideX(x);
    a.output();
    break;
  }
  case 2: {
    Array<float>a;
    float m;
    a.input();
    a.output();
    cout << "Sum: " << a.sum() << endl;
    cout << "Min: " << a.findMin() << endl;
    float x;
    cout << "Input an position to get and set element : " << endl;
    cin >> selection;
    cout << "Get the element : " << a[selection] << endl;
    cout << "Set the element to ? " << endl;
    cin >> m;
    cout << "Set done!" << endl;
    a[selection] = m;
    cout << "Input X to devide: ";
    cin >> x;
    a.devideX(x);
    a.output();
    break;
  }
  case 3: {
    Array<Fraction>a;
    Fraction m;
    try {
      a.input();
    }
    catch (char *error) {
      cout << "Error: " << error << endl;
      a.~Array();
      return 0;
    }
    a.output();
    cout << "Sum: " << a.sum() << endl;
    cout << "Min: " << a.findMin() << endl;
    cout << "Input an position to get and set element : " << endl;
    cin >> selection;
    cout << "Get the element : " << a[selection] << endl;
    cout << "Set the element to another Fraction: " << endl;
    cout << "Other fraction numerator : ";
    cin >> m.nu;
    cout << "Other fraction denom : ";
    cin >> m.de;
    cout << "Set done!" << endl;
    a[selection] = m;
    Fraction x;
    cout << "Input X to devide: ";
    cin >> x;
    a.devideX(x);
    a.output();
    break;
  }
  default:
    break;
  }
  system("pause");
  return 0;
}