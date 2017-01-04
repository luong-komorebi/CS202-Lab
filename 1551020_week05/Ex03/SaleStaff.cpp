#include "SaleStaff.h"



SaleStaff::SaleStaff() 
{
  numberProduct = 0;
}

SaleStaff::SaleStaff(string n, string p, string e, string a, Date d, int nP) : StaffMember(n, p, e, a, d)
{
  numberProduct = nP;
  setSalary(takeSalary());
}

double SaleStaff::takeSalary()
{
  return _Sale*numberProduct*(Sold_Price - Cost_Of_Product);
}



