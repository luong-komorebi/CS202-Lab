#pragma once 
#include <string>
#include <iostream>

using namespace std;

class student {
public:
  void input(long ID, string fullname, string gender, string address, float mark);
  student greaterMark(student anotherOne);
    char GPA();
    int classID();
    long getID();
    string getName();
    string getAddress();
    float getMark();
private:
  long ID;
  string fullname;
  string gender;
  string address;
  float mark;
};