#pragma once

#include <string>
#include <iostream>

using namespace std;

class student {
public:
  void input(long ID, string firstname, string lastname, string gender, string address, float mark);
  friend student* sortStudent( student* a, int noOfStudent);
  char GPA();
  int classID();
  long getID();
  string getFName();
  string getLName();
  string getAddress();
  float getMark();
private:
  long ID;
  string firstname;
  string lastname;
  string gender;
  string address;
  float mark;
};