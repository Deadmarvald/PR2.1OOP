#pragma once

#include <iostream>
#include <string>

using namespace std;

class Pay
{
private:
	double first;
	int second;

public:
	Pay();
	Pay(double, int);
	Pay(const Pay&);
	~Pay();

	double GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(double first) { this->first = first; }
	void SetSecond(int second) { this->second = second; }

	Pay& operator = (const Pay&);
	operator string() const;
	friend Pay operator + (const Pay&, const Pay&);
	friend Pay operator - (const Pay&, const Pay&);
	friend Pay operator * (const Pay&, const Pay&);
	friend Pay operator / (const Pay&, const Pay&);
	friend Pay operator ^ (const Pay&, const Pay&);

	friend ostream& operator << (ostream&, const Pay&);
	friend istream& operator >> (istream&, Pay&);

	Pay& operator ++();
	Pay& operator --();
	Pay operator ++(int);
	Pay operator --(int);

	double Summa(int s);
};