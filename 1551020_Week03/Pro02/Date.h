#pragma once
#include<iostream>


class Date
{
private:
	int iDay, iMonth, iYear;
public:
	Date();
	Date(int);
	Date(int, int);
	Date(int,int,int);
	
	// help function
	bool isLeapYear();
	bool checkDate();
	int dayOfMonth();
	int dayInYear();
	long dayFrom111();

	Date Tomorrow();
	Date Yesterday();

	// operator compare
	bool operator==(const Date&);
	bool operator!=(const Date&);
	bool operator>=(const Date&);
	bool operator<=(const Date&);
	bool operator>(const Date&);
	bool operator<(const Date&);
	// operator + -
	friend Date operator+(const Date&,int);
	friend Date operator-(const Date&, int);
	// prefix
	Date& operator++();
	Date& operator--();
	// postfix
	Date operator++(int);
	Date operator--(int);
	// += , -=
	Date& operator+=(int);
	Date& operator-=(int);
	// iostream
	friend std::istream& operator >> (std::istream &in,Date&);
	friend std::ostream& operator <<(std::ostream &out,const Date&);
	// cast style
	operator int();
	operator long();
};
