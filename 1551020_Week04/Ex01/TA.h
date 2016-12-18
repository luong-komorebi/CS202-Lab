#pragma once
#include <iostream>
#include "Employee.h"
using namespace std; 
class TA : public Employee {
private :
  int Number_Of_Work_Hours;
public :
  TA(void);
  /*TA(const int& hour);
  TA(const string& name);*/
  TA(const int& hour, const string& name);
  int money();
  ~TA();
};