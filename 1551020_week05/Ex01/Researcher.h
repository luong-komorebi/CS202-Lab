#pragma once
#include "Employee.h"
#include <iostream>
using namespace std;

class Researcher : public Employee {
private:
  int Number_Of_Research_Project;
  int Project_Salary;
  int Paper_Support;
  int Numbers_Of_Paper;
public:
  Researcher(void);
  /*Researcher(const string& name);
  Researcher( const int& projectNum);
  Researcher(const int& paperNum);*/
  Researcher(const int& paperNum, const int& projectNum, const string& name);
  int money();
  ~Researcher();


};