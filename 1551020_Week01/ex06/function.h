#pragma once


#include <iostream>

using namespace std;

class date {
public:
  void input(int a, int b, int c);
  int dateDistance(date a);
 
private:
  int day;
  int month;
  int year;
};
int LeapYear(int year);