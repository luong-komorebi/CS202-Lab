#pragma once
#include"Date.h"
#include"StaffMember.h"
const int Paid_Product = 150000;
class ProductionStaff : public StaffMember
{
private:
  int numberProduct;
public:
  ProductionStaff();
  ProductionStaff(string, string, string, string, Date, int);

  double takeSalary();
};



