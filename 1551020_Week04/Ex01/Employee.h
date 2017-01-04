#pragma once
#include <iostream>
using namespace std;



class Employee{
protected : 
  string name;
public :
  Employee(void);
  Employee(const string& name); 
  int Base_Salary = 500;
  int Project_Support = 300;
  int Project_Salary = 900;
  virtual int money();

};