#pragma once
#include "function.h"
#include <iostream>

using namespace std;

void date::input(int a, int b, int c) {
  day = a;
  month = b;
  year = c;
}

int date::dateDistance(date a) {
  int dateOfYear = 0, dateOfMonth = 0, date = 0, year1 = 0, year2 = 0, month1 = 0, month2 = 0, date1=0, date2=0;
  if (this->year > a.year) {
    year1 = a.year;
    month1 = a.month;
    date1 = a.day;
    year2 = this->year;
    month2 = this->month;
    date2 = this->day;
  }
  else {
    year2 = a.year;
    month2 = a.month;
    date2 = a.day;
    year1 = this->year;
    month1 = this->month;
    date1 = this->day;
  }
  for (int i = year1; i<year2; i++)
    if (LeapYear(i)) dateOfYear += 366;  
    else dateOfYear += 365;

    /* Tinh khoang cach so ngay giua 2 thang */
    int b[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (LeapYear(year2)) b[1] = 29;          
    if (month1>month2)
    {
      for (int i = month2; i<month1; i++)
        dateOfMonth -= b[i - 1];
    }
    else
    {
      for (int i = month1; i<month2; i++)
        dateOfMonth += b[i - 1];
    }

    /* Tinh khoang cach giua 2 ngay */
    date = date2 - date1 + 1;       //Ket qua tinh ca ngay cuoi cung

    return dateOfYear + dateOfMonth + date;
}

int LeapYear(int year) {
    if (year % 400 == 0) return 1;
    else if (year % 100 != 0 && year % 4 == 0) return 1;
    return 0;
 }