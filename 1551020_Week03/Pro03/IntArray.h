#pragma once
#include<iostream>
#include<string>
class IntArray
{
private:
	int iN, *pArr;
public:
	// constructors
	IntArray();
	IntArray(int);
	IntArray(int [], int);
	IntArray(const IntArray&); // copy constructor
	//desconstructor
	~IntArray();
	// operator =
	IntArray& operator=(const IntArray&);
	// substrip operator
	int operator[] (int) const;
	int &operator[] (int);
	// type cast operator
	operator int();
	// compare operator
	bool operator !=(const IntArray&);
	// iostream operator
	friend std::istream& operator >> (std::istream &,IntArray &);
	friend std::ostream& operator << (std::ostream &,const IntArray&);
};

