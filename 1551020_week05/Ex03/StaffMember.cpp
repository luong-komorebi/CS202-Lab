#include "StaffMember.h"



StaffMember::StaffMember()
{
  Name = "";
  Passport = "";
  Email = "";
  Address = "";
  Salary = 0;
}

StaffMember::StaffMember(string n, string p, string e, string a, Date d)
{
  Name = n;
  Passport = p;
  Email = e;
  Address = a;
  Dob = d;
  Salary = 0;
}

StaffMember::StaffMember(string n, string p, string e, string a, Date d, double s)
{
  Name = n;
  Passport = p;
  Email = e;
  Address = a;
  Dob = d;
  Salary = s;
}

void StaffMember::inputInfo()
{
  cout << "Name: ";
  getline(cin, Name);
  cout << "Passport: ";
  getline(cin, Passport);
  cout << "Email: ";
  getline(cin, Email);
  cout << "Address: ";
  getline(cin, Address);
}

double StaffMember::getSalary()
{
  return Salary;
}

void StaffMember::setSalary(double s)
{
  Salary = s;
}

void StaffMember::Display()
{
  cout << "\nName: " << Name;
  cout << "\nPassport: " << Passport;
  cout << "\nEmail: " << Email;
  cout << "\nAddress: " << Address;
  cout << "\nSalary: " << getSalary() << " VND";
}



