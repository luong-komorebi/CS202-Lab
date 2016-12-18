#include "Fraction.h"


Fraction::Fraction()
{
	iNu = 0;
	iDenom = 1;
}
Fraction::Fraction(int i)
{
	iNu = i;
	iDenom = 1;
}
Fraction::Fraction(int num,int denom)
{
	iNu = num;
	iDenom = denom;
}
std::ostream& operator<<(std::ostream& out,Fraction f)
{
	if (f.iDenom < 0) {
		f.iNu *= -1;
		f.iDenom *= -1;
	}
	out<<f.iNu<<" / "<<f.iDenom<<"\n";
	return out;
}
Fraction& Fraction::operator+(Fraction f)
{
	f.iDenom = f.iDenom * iDenom;
	f.iNu = f.iNu*iDenom + f.iDenom*iNu;
	return f;
}
Fraction& Fraction::operator-(Fraction f)
{
	f.iDenom = f.iDenom * iDenom;
	f.iNu = iNu*f.iDenom - f.iNu*iDenom;
	return f;
}
Fraction& Fraction::operator*(Fraction f)
{
	f.iDenom = f.iDenom * iDenom;
	f.iNu = f.iNu * iNu;
	return f;
}
Fraction Fraction::operator/(Fraction f)
{
	Fraction devide;
	devide.iDenom = iDenom * f.iNu;
	devide.iNu = iNu * f.iDenom;
	return devide;
}
Fraction& operator+(Fraction f,int k)
{
	Fraction sum;
	sum.iDenom = f.iDenom;
	sum.iNu = f.iNu + k*f.iDenom;
	return sum;
}
Fraction& operator-(Fraction f,int a)
{
	Fraction substract;
	substract.iDenom = f.iDenom;
	substract.iNu = f.iNu - a*f.iDenom;
	return substract;
}
Fraction& operator*(int b,Fraction f)
{
	f.iNu*=b;
	return f;
}
Fraction& Fraction::operator+=(Fraction f)
{
	f.iDenom = f.iDenom * iDenom;
	f.iNu = f.iNu*iDenom + f.iDenom*iNu;
	return f;
}
Fraction& Fraction::operator-=(Fraction f)
{
	f.iDenom = f.iDenom * iDenom;
	f.iNu = iNu*f.iDenom - f.iNu*iDenom;
	return f;
}
Fraction& Fraction::operator*=(Fraction f)
{
	f.iDenom = f.iDenom * iDenom;
	f.iNu = f.iNu * iNu;
	return f;
}
Fraction& Fraction::operator/=(Fraction f)
{
	Fraction devide;
	devide.iDenom = iDenom * f.iNu;
	devide.iNu = iNu * f.iDenom;
	return devide;
}
bool Fraction::operator==(Fraction f)
{
	if(!(iNu*f.iDenom-iDenom*f.iNu==0)) return false;
	return true;
}
bool Fraction::operator!=(Fraction f)
{
	if(iNu*f.iDenom-iDenom*f.iNu==0) return false;
	return true;
}
bool Fraction::operator>=(Fraction f)
{
	if(!(iNu*f.iDenom-iDenom*f.iNu>=0)) return false;
	return true;
}
bool Fraction::operator>(Fraction f)
{
	if(!(iNu*f.iDenom-iDenom*f.iNu>0)) return false;
	return true;
}
bool Fraction::operator<(Fraction f)
{
	if(!(iNu*f.iDenom-iDenom*f.iNu<0)) return false;
	return true;
}
bool Fraction::operator<=(Fraction f)
{
	if(!(iNu*f.iDenom-iDenom*f.iNu<=0)) return false;
	return true;
}
Fraction& Fraction::operator++()
{
	iNu = iNu + iDenom;
	return *this;
}
Fraction Fraction::operator++(int)
{
	Fraction f = *this;
	++f;
	return f;
}
Fraction& Fraction::operator--()
{
	iNu = iNu - iDenom;
	return *this;
}
Fraction Fraction::operator--(int)
{
	Fraction f = *this;
	--f;
	return f;
}
Fraction::operator float()
{
	return static_cast<float>(iNu) / iDenom;
}
