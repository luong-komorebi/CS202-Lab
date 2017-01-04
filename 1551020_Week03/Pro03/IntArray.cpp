#include "IntArray.h"



IntArray::IntArray()
{
	iN = 5;
	pArr = new int[iN];
	for (int i = 0; i < iN; ++i) {
		pArr[i] = 0;
	}
}

IntArray::IntArray(int n)
{
	iN = n;
	pArr = new int[iN];
	for (int i = 0; i < iN; ++i) {
		pArr[i] = 0;
	}
}

IntArray::IntArray(int a[], int na)
{
	if (iN != na) {
		iN = na;
		pArr = new int[iN];
	}
	for (int i = 0; i < iN; ++i) {
		pArr[i] = a[i];
	}
}

IntArray::IntArray(const IntArray &a)
{
	iN = a.iN;
	pArr = new int[iN];
	for (int i = 0; i < iN; ++i) {
		pArr[i] = a.pArr[i];
	}
}

IntArray::~IntArray()
{
	delete [] pArr;
}

IntArray & IntArray::operator=(const IntArray &a)
{
	if (this != &a) {
		if (iN != a.iN) {
			delete[] pArr;
			iN = a.iN;
			pArr = new int[iN];
		}
		for (int i = 0; i < iN; ++i) {
			pArr[i] = a.pArr[i];
		}
	}
	return *this;
}

int IntArray::operator[](int i) const
{
	std::string out_of_range;
	if (i >= iN || i < 0) throw out_of_range="Subscript out of range";
	return pArr[i];
}

int & IntArray::operator[](int i)
{
	std::string out_of_range;
	if (i >= iN || i < 0) throw out_of_range="Subscript out of range";
	return pArr[i];
}

IntArray::operator int()
{
	int sum = 0;
	for (int i = 0; i < iN; ++i) {
		sum += pArr[i];
	}
	return sum;
}

bool IntArray::operator!=(const IntArray &a)
{
	return(*this!=a);
}

std::istream & operator >> (std::istream &in, IntArray &a)
{
	std::cout << "\n Input number of elements: ";
	in >> a.iN;
	std::cout << "\n Input Array: ";
	a.pArr = new int[a.iN];
	for (int i = 0; i < a.iN; ++i) {
		std::cout << "\n Input " << i + 1 << " :";
		in >> a.pArr[i];
	}
	return in;
}

std::ostream & operator<<(std::ostream &out,const IntArray& a)
{
	for (int i = 0; i < a.iN;++i){
		out << a.pArr[i]<<" ";
	}
	std::cout << "\n";
	return out;
}
