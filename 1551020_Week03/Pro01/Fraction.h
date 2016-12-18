
#pragma once
#include<iostream>

class Fraction
{
private:
	int iNu,iDenom;
public:
	Fraction(); // default
	Fraction(int);
	Fraction(int,int);
	friend std::ostream& operator<<(std::ostream& out,Fraction); // cout<<
	Fraction& operator+(Fraction); // +
	Fraction& operator-(Fraction); // -
	Fraction& operator*(Fraction); // * 
	Fraction operator/(Fraction); // /
	friend Fraction& operator+(Fraction f,int k); //  fraction + int
	friend Fraction& operator-(Fraction f,int a); // fraction - int
	friend Fraction& operator*(int b,Fraction f); // int * fraction
	Fraction& operator+=(Fraction);// +=
	Fraction& operator-=(Fraction);// -=
	Fraction& operator*=(Fraction);// *=
	Fraction& operator/=(Fraction);// /=
	// compare function
	bool operator==(Fraction f);
	bool operator!=(Fraction f);
	bool operator>=(Fraction f);
	bool operator>(Fraction f);
	bool operator<(Fraction f);
	bool operator<=(Fraction f);
	// ++ -- operator
	Fraction& operator++();
	Fraction operator++(int);
	Fraction& operator--();
	Fraction operator--(int);
	operator float();
};

