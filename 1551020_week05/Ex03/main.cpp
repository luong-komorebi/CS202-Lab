#include"ArrayStaff.h"
#include<iostream>

using namespace std;

int main()
{
  ArrayStaff company;
  company.Input();
  cout << endl;

  company.Display();
  company.sortStaffMoney();

  cout << endl;
  company.Display();

  system("pause");
  return 0;
}