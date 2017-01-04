#pragma once
#include "function.h"
#include <iostream>
#include <string>

using namespace std;

void student::input(long ID, string fullname, string gender, string address, float mark) {
  this->ID = ID;
  this->fullname = fullname;
  this->gender = gender;
  this->address = address;
  this->mark = mark;
};

student student::greaterMark(student oneAnother) {
  if (this->mark < oneAnother.mark) {
    return oneAnother;
  }
  else return *this;
}

char student::GPA() {
  if (this->mark <= 10 && this->mark > 9)
    return 'A';
  if (this->mark <= 9 && this->mark > 8)
    return 'B';
  if (this->mark <= 8 && this->mark > 7)
    return 'C';
  if (this->mark <= 7 && this->mark > 6)
    return 'D';
  if (this->mark <= 6 && this->mark > 5)
    return 'E';
  if (this->mark <= 5 && this->mark > 4)
    return 'F';
}

int student::classID() {
  int a,b;
  a = ID % 10;
  while (ID != 0)
  {
    b = a;
    ID= ID / 10;
    a = ID % 10;
  }
  return a * 10 + b;
}

long student::getID() {
  return ID;
}
string student::getName() {
  return fullname;
}
string student::getAddress() {
  return address;
}
float student::getMark() {
  return mark;
}