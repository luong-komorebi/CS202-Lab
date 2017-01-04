
#pragma once
#include "function.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void student::input(long ID, string firstname, string lastname, string gender, string address, float mark) {
  this->ID = ID;
  this->firstname = firstname;
  this->lastname = lastname;
  this->gender = gender;
  this->address = address;
  this->mark = mark;
};

student* sortStudent(student *a, int noOfStudent) {
  string *name;
  name = new string[noOfStudent];
  for (int i = 0; i < noOfStudent; i++) {
    name[0] = a[i].lastname;
  }
  sort(name, name + noOfStudent);
  student *b;
  b = new student[noOfStudent];
  for (int j = 0, m = 0; j < noOfStudent && m< noOfStudent; j++) {
    if (name[m] == a[j].lastname) {
      b[m] = a[j];
      j = 0;
      m++;
    }
  }
  return b;
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
  int a, b;
  a = ID % 10;
  while (ID != 0)
  {
    b = a;
    ID = ID / 10;
    a = ID % 10;
  }
  return a * 10 + b;
}

long student::getID() {
  return ID;
}
string student::getFName() {
  return firstname;
}
string student::getLName() {
  return lastname;
}
string student::getAddress() {
  return address;
}
float student::getMark() {
  return mark;
}
