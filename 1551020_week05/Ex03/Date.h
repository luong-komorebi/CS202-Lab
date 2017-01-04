#pragma once
#include<iostream>
using namespace std;
class Date
{
private:
  int day, month, year;
public:
  Date();
  Date(int, int);
  Date(int, int, int);

  void Input();
  bool checkDate();
  bool isLeapYear();
};
