#pragma once

#include"StaffMember.h"
#include"OfficialStaff.h"
#include"ProductionStaff.h"
#include"SaleStaff.h"
#include"Date.h"
#include<typeinfo>
#include<algorithm>
#include<vector>
using namespace std;
class ArrayStaff
{
private:
  vector<StaffMember *>member;
  int n;
public:
  ArrayStaff();
  ~ArrayStaff();

  void Input();
  void InputInfo(string&, string&, string&, string&);

  void Display();
  void sortStaffMoney();
};


