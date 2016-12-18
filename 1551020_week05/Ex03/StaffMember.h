#pragma once

#include<iostream>
#include<string>
#include"Date.h"
using namespace std;
class StaffMember
{
protected:
  string Name, Passport, Email, Address;
  Date Dob;
  double Salary;
public:
  StaffMember();
  StaffMember(string, string, string, string, Date);
  StaffMember(string, string, string, string, Date, double);

  void inputInfo();
  double getSalary();
  void setSalary(double);


  virtual void Display();
};
