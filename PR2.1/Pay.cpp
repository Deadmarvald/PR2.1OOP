#include "Pay.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Pay::Pay()
{
	first = 0;
	second = 0;
}

Pay::Pay(double first = 0, int second = 0)
{
	this->first = first;
	this->second = second;
}

Pay::Pay(const Pay& x)
{
	first = x.first;
	second = x.second;
}

Pay::~Pay()
{ }

Pay& Pay::operator =(const Pay& x)
{
	first = x.first;
	second = x.second;

	return *this;
}

Pay::operator string () const
{
	stringstream ss;
	ss << " First = " << first << endl;
	ss << " Second = " << second << endl;

	return ss.str();
}

Pay operator +(const Pay& x, const Pay& y)
{
	return Pay(x.first + y.first, x.second + y.second);
}

Pay operator -(const Pay& x, const Pay& y)
{
	return Pay(x.first - y.first, x.second - y.second);
}

Pay operator *(const Pay& x, const Pay& y)
{
	return Pay(x.first * y.first, x.second * y.second);
}

Pay operator /(const Pay& x, const Pay& y)
{
	return Pay(x.first / y.first, x.second / y.second);
}

Pay operator ^(const Pay& x, const Pay& y)
{
	return Pay(pow(x.first, y.first), pow(x.second, y.second));
}

ostream& operator << (ostream& out, const Pay& x)
{
	out << string(x);

	return out;
}

istream& operator >> (istream& in, Pay& x)
{
	cout << " First = "; in >> x.first;
	cout << " Second = "; in >> x.second;
	cout << endl;

	return in;
}

Pay& Pay::operator ++()
{
	first++;

	return *this;
}

Pay& Pay::operator --()
{
	first--;

	return *this;
}

Pay Pay::operator ++(int)
{
	Pay t(*this);
	second++;
	
	return t;
}

Pay Pay::operator --(int)
{
	Pay t(*this);
	second--;
	return t;
}

double Pay::Summa(int s)
{
	return first / second * s;
}