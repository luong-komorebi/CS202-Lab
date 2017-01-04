#include "Date.h"



Date::Date()
{
	iDay = 2;
	iMonth = 11;
	iYear = 2012;
}

Date::Date(int iy)
{
	
	iDay = 1;
	iMonth = 12;
	iYear = iy;
}

Date::Date(int iy, int im)
{
	iDay = 1;
	iMonth = im;
	iYear = iy;
}

Date::Date(int iy, int im, int id)
{
	iDay = id;
	iMonth = im;
	iYear = iy;
}

bool Date::isLeapYear()
{
	return(iYear%4==0&&iYear%100!=0||iYear%400==0);
}

bool Date::checkDate()
{
	if (iMonth <= 0 || iMonth >= 13) return false;
	switch (iMonth)
	{
	case 1:case 3:case 5:case 7:case 8:case 10: case 12: if (iDay <= 0 || iDay >= 32) return false; break;
	case 4: case 6: case 9: case 11: if (iDay <= 0 || iDay >= 31) return false; break;
	case 2: if (isLeapYear() == true)
	{
		if (iDay <= 0 || iDay >= 30) return false;
	}
			else
				if (iDay <= 0 || iDay >= 29) return false; break;
	}
	return true;
}

int Date::dayOfMonth()
{
	switch (iMonth)
	{
	case 1:case 3:case 5:case 7:case 8:case 10: case 12:  return 31; break;
	case 4: case 6: case 9: case 11: return 30; break;
	case 2: if (isLeapYear() == true)
	{
		return 29;
	}
			else
				return 28; break;
	}
}

int Date::dayInYear()
{	
	int counter = 0;
	Date tmp(iYear,1,1);
	for (tmp.iMonth; tmp.iMonth< iMonth; ++tmp.iMonth) {
		counter += tmp.dayOfMonth();
	}
	counter += iDay;
	return counter;
}

long Date::dayFrom111()
{
	long counter = 0;
	Date tmp(1,1,1);
	for (int i = tmp.iYear; i < iYear; ++i) // from year 1 to current year
	{
		if (tmp.isLeapYear() == true) counter += 366;
		else counter += 365;
	}
	for (tmp.iMonth; tmp.iMonth < iMonth; ++tmp.iMonth) {
		counter += tmp.dayOfMonth();
	}
	counter += iDay;
	return counter;
}

Date Date::Tomorrow()
{
	Date d = *this;
	d.iDay++;
	if (d.iDay > dayOfMonth()) {
		d.iDay = 1;
		d.iMonth++;
		if (d.iMonth > 12) {
			d.iMonth = 1;
			d.iYear++;
			d.iDay = 1;
		}
	}
	return d;
}

Date Date::Yesterday()
{
	Date d = *this;
	d.iDay--;
	if (d.iDay == 0) {
		d.iMonth--;
		d.iDay = dayOfMonth();
		if (d.iMonth == 0) {
			d.iYear--;
			d.iMonth = 12;
			d.iDay = dayOfMonth();
		}
	}
	return d;
}

bool Date::operator==(const Date& d)
{
	if (iYear != d.iYear||iMonth != d.iMonth||iDay != d.iDay) return false;
	return true;
}

bool Date::operator!=(const Date& d)
{
	if (iYear != d.iYear || iMonth != d.iMonth || iDay != d.iDay) return true;
	return false;
}

bool Date::operator>=(const Date& d)
{
	if (iYear >= d.iYear) return true;
	if (iMonth >= d.iYear) return true;
	if (iDay >= d.iDay) return true;
	return false;
}

bool Date::operator<=(const Date& d)
{
	if (iYear <= d.iYear) return true;
	if (iMonth <= d.iYear) return true;
	if (iDay <= d.iDay) return true;
	return false;
}

bool Date::operator>(const Date& d)
{
	if (iYear > d.iYear) return true;
	if (iMonth > d.iYear) return true;
	if (iDay > d.iDay) return true;
	return false;
}

bool Date::operator<(const Date& d)
{
	if (iYear < d.iYear) return true;
	if (iMonth < d.iYear) return true;
	if (iDay < d.iDay) return true;
	return false;
}

Date& Date::operator++()
{
	iDay++;
	if (iDay > dayOfMonth()) {
		iDay = 1;
		iMonth++;
		if (iMonth > 12) {
			iMonth = 1;
			iYear++;
			iDay = 1;
		}
	}
	return *this;
}

Date & Date::operator--()
{
	iDay--;
	if (iDay == 0) {
		iMonth--;
		iDay = dayOfMonth();
		if (iMonth == 0) {
			iYear--;
			iMonth = 12;
			iDay = dayOfMonth();
		}
	}
	return *this;
}

Date Date::operator++(int)
{
	Date d = *this;
	d.iDay++;
	if (d.iDay > dayOfMonth()) {
		d.iDay = 1;
		d.iMonth++;
		if (d.iMonth > 12) {
			d.iMonth = 1;
			d.iYear++;
			d.iDay = 1;
		}
	}
	return d;
}

Date Date::operator--(int)
{
	Date d = *this;
	d.iDay--;
	if (d.iDay == 0) {
		d.iMonth--;
		d.iDay = dayOfMonth();
		if (d.iMonth == 0) {
			d.iYear--;
			d.iMonth = 12;
			d.iDay = dayOfMonth();
		}
	}
	return d;
}

Date& Date::operator+=(int n)
{
	for (int i = 1; i <= n; ++i) {
		*this = this->Tomorrow();
	}
	return *this;
}

Date& Date::operator-=(int n)
{
	for (int i = 1; i <= n; ++i) {
		*this = this->Yesterday();
	}
	return *this;
}

Date::operator int()
{
	return this->dayInYear();
}

Date::operator long()
{
	return this->dayFrom111();
}

Date operator+(const Date& d,int n)
{
	Date newd = d;
	for (int i = 1; i <= n; ++i) {
		newd = newd.Tomorrow();
	}
	return newd;
}

Date operator-(const Date& d, int n)
{
	Date newd = d;
	for (int i = 1; i <= n; ++i) {
		newd = newd.Yesterday();
	}
	return newd;
}

std::istream & operator >> (std::istream & in, Date &d)
{
	std::cout << "\n Day: ";
	in >> d.iDay;
	std::cout << "\n Month: ";
	in >> d.iMonth;
	std::cout << "\n Year: ";
	in >> d.iYear;
	return in;
}

std::ostream & operator<<(std::ostream & out, const Date &d)
{
	out << d.iDay << " / " << d.iMonth << " / " << d.iYear<<std::endl;
	return out;
}
