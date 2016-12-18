#include "OfficialStaff.h"



OfficialStaff::OfficialStaff() 
  numberDay = 0;
  dayOff = 0;
}

OfficialStaff::OfficialStaff(int nD) 
{
  numberDay = nD;
  dayOff = 0;
}


OfficialStaff::OfficialStaff(string n, string p, string e, string a, Date d, int nD, int dO) : StaffMember(n, p, e, a, d)
{
  numberDay = nD;
  dayOff = dO;
  setSalary(takeSalary());
}

double OfficialStaff::takeSalary()
{
  if (dayOff <= 2) return(numberDay*Base_Salary + Allowance);
  return (numberDay*Base_Salary);
}



