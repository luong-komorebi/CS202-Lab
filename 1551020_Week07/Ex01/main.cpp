
#include"Machine.h"
#include<iostream>
using namespace std;
int main() {
  Machine a;
  a.Input();
  cout << "Sum of Price: " << a.sumPrice();
  cout << "\nSum of Weight: " << a.sumWeight();
  system("pause");
  return 0;
}