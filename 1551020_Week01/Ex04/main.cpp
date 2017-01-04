#include "function.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
  int a, b, inputTimes = 0;
  canh sampleCanh1, sampleCanh2, sampleCanh3;
  tamgiac sampleTamGiac;
  point x, y;
  ofstream fout;
  fout.open("output.csv");

  cout << "Vui long nhap toa do ba canh tam giac\n";
  cout << "Nhap hoanh do diem thu nhat : ";
  cin >> a;
  cout << "Nhap tung do diem thu nhat: ";
  cin >> b;
  x.input(a, b);
  cout << "Nhap hoanh do diem thu hai : ";
  cin >> a;
  cout << "Nhap tung do diem thu hai: ";
  cin >> b;
  y.input(a, b);
  sampleCanh1.setLength(x, y);
  fout << "A(" << a << "," << b << "),";
  cout << "Ban da nhap thanh cong canh 1.\n";

  cout << "Vui long nhap toa do ba canh tam giac\n";
  cout << "Nhap hoanh do diem thu nhat : ";
  cin >> a;
  cout << "Nhap tung do diem thu nhat: ";
  cin >> b;
  x.input(a, b);
  cout << "Nhap hoanh do diem thu hai : ";
  cin >> a;
  cout << "Nhap tung do diem thu hai: ";
  cin >> b;
  y.input(a, b);
  sampleCanh2.setLength(x, y);
  fout << "B(" << a << "," << b << "),";
  cout << "Ban da nhap thanh cong canh 2.\n";

  cout << "Vui long nhap toa do ba canh tam giac\n";
  cout << "Nhap hoanh do diem thu nhat : ";
  cin >> a;
  cout << "Nhap tung do diem thu nhat: ";
  cin >> b;
  x.input(a, b);
  cout << "Nhap hoanh do diem thu hai : ";
  cin >> a;
  cout << "Nhap tung do diem thu hai: ";
  cin >> b;
  y.input(a, b);
  sampleCanh3.setLength(x, y);
  fout << "C(" << a << "," << b << "),\n";
  cout << "Ban da nhap thanh cong canh 3.\n";

  sampleTamGiac.setCanh(sampleCanh1, sampleCanh2, sampleCanh3);
  if (sampleTamGiac.checkBuildable() == true) {
    fout << sampleTamGiac.typeOfTriangle()<<",";
    fout << sampleTamGiac.perimeter() << ",";
    fout << sampleTamGiac.area() << ",";
    fout.close();
  }
  else cout << " Khong the tao dc tam giac.";

  return 0;
}