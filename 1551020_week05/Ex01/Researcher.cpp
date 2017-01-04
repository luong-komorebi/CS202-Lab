#pragma once

#include "Researcher.h"
#include <iostream>
#include <string>
using namespace std;


Researcher::Researcher(void) {
  Numbers_Of_Paper = 0;
  Number_Of_Research_Project = 0;
}

//Researcher::Researcher(const string& name) {
//  this->name = name;
//}
//
//Researcher::Researcher(const int& projectNum) {
//  Numbers_Of_Paper = 0;
//  Number_Of_Research_Project = projectNum;
//}
//
//Researcher::Researcher(const int& paperNum) {
//  Number_Of_Research_Project = 0;
//  Numbers_Of_Paper = paperNum;
//}

Researcher::Researcher(const int& paperNum, const int& projectNum, const string& name) : Employee(name) {
  Numbers_Of_Paper = paperNum;
  Number_Of_Research_Project = projectNum;
}

Researcher::~Researcher() {
  cout << "Researcher's name : " << name << "\t Researcher's Number Of Projects" << Number_Of_Research_Project << "\t Researcher's Number of Paper" << Numbers_Of_Paper;
}

int Researcher::money() {
  return Number_Of_Research_Project * Project_Salary + 1.1 * Project_Support * Numbers_Of_Paper;
}