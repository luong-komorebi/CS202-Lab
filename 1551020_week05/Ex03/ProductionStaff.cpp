#include "ProductionStaff.h"



ProductionStaff::ProductionStaff() : StaffMember()
{
  numberProduct = 0;
}

ProductionStaff::ProductionStaff(string n, string p, string e, string a, Date d, int nP) : StaffMember(n, p, e, a, d)
{
  numberProduct = nP;
  setSalary(takeSalary());
}

double ProductionStaff::takeSalary()
{
  return(numberProduct*Paid_Product);
}



