#pragma once
#include <iostream>
#include "Employee.h"
using namespace std; 

class Lecturer : public Employee {
private : 
  int Number_Of_Lecturing_Hours;
  int Number_Of_Paper;
public :
  Lecturer(void);
  //Lecturer(const string& name);
  //Lecturer(const int& paperNumber);
  //Lecturer(const int& hour);
  Lecturer(const int& paperNumber, const int& hour, const string& name);
  int money();
  ~Lecturer();
};