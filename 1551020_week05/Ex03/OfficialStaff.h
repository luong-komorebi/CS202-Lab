#pragma once
#include"StaffMember.h"
#include"Date.h"
const int Base_Salary = 120000; // vnd
const int Allowance = 300000; // vnd

class OfficialStaff : public StaffMember
{
private:
  int numberDay;
  int dayOff;
public:
  OfficialStaff();
  OfficialStaff(int);
  OfficialStaff(string, string, string, string, Date, int, int);

  double takeSalary();



};
