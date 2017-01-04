#pragma once
#include"Date.h"
#include"StaffMember.h"
const float _Sale = 0.15;
const int Sold_Price = 200000;
const int Cost_Of_Product = 140000;

class SaleStaff : public StaffMember
{
private:
  int numberProduct;
public:
  SaleStaff();
  SaleStaff(string, string, string, string, Date, int);

  double takeSalary();
};


