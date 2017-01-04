#include "Date.h"



Date::Date()
{
  day = 1;
  month = 1;
  year = 1997;
}

Date::Date(int d, int m)
{
  day = d;
  month = m;
  year = 1997;
}

Date::Date(int d, int m, int y)
{
  day = d;
  month = m;
  year = y;
}

void Date::Input()
{
  do {
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;
    if (checkDate() != true) cout << "Wrong Date !!, pls try again \n";
  } while (checkDate() != true);
}

bool Date::checkDate()
{
  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
  {
    if (1 <= month&&month <= 12)
    {
      if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
      {
        if (1 <= day&&day <= 31) return true;
        else return false;
      }
      if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
      {
        if (1 <= day&&day <= 30) return true;
        else return false;
      }
      if (month == 2)
      {
        if (1 <= day&&day <= 29) return true;
        else return false;
      }
    }
  }
  else
  {
    if (1 <= month&&month <= 12)
    {
      if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
      {
        if (1 <= day&&day <= 31) return true;
        else return false;
      }
      if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
      {
        if (1 <= day&&day <= 30) return true;
        else return false;
      }
      if (month == 2)
      {
        if (1 <= day&&day <= 28) return true;
        else return false;
      }
    }
  }
}

bool Date::isLeapYear()
{
  return(year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}


