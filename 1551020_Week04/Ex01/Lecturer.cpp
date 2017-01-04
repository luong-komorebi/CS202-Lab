
#include "Lecturer.h"
#include <iostream>
#include <string>
using namespace std;
Lecturer::Lecturer(void) {
  Number_Of_Lecturing_Hours = 0;
  Number_Of_Paper = 0;
}

//Lecturer::Lecturer(const string& name) {
//  this->name = name;
//}
//
//Lecturer::Lecturer(const int& hour) {
//  Number_Of_Lecturing_Hours = hour;
//  Number_Of_Paper = 0;
//}
//
//Lecturer::Lecturer(const int& paper) {
//  Number_Of_Paper = paper;
//  Number_Of_Lecturing_Hours = 0;
//}

Lecturer::Lecturer(const int& paper, const int& hour, const string& name) : Employee(name) {
  Number_Of_Paper = paper;
  Number_Of_Lecturing_Hours = hour;
}

Lecturer::~Lecturer() {
  cout << "Lecturer's name: " << name << "\t Lecturer's Number Of Lecturing Hours: " << Number_Of_Lecturing_Hours << "\t Lecturer's Number of Paper: " << Number_Of_Paper;
}

int Lecturer::money() {
  return 1.2 * Number_Of_Lecturing_Hours * Base_Salary + Project_Support* Number_Of_Paper;
}