
  #include "TA.h"
  #include <iostream>
  #include <string>
  using namespace std;

  TA::TA(void) {

  }
  //TA::TA(const int& hour) {
  //  Number_Of_Work_Hours = hour;
  //};
  //
  //TA::TA(const string& name) {
  //  this->name = name;
  //};

  TA::TA(const int& hour, const string& name) : Employee(name) {
    this->name = name;
    Number_Of_Work_Hours = hour;
  };

  TA::~TA() {
    cout << "Ta's name : " << name << "\t Ta's number of work hour: " << Number_Of_Work_Hours;
  }

  int TA::money() {
    return  1.2 * Number_Of_Work_Hours * Base_Salary;
  }