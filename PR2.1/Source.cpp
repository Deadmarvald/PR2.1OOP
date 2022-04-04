#include <iostream>
#include "Pay.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	Pay d;
	Pay f(20, 3);
	Pay s(30, 2);

	d = f + s;
	cout << "f(20, 3) + s(30, 2)" << d << endl;

	d = f - s;
	cout << "f(20, 3) - s(30, 2)" << d << endl;

	d = f * s;
	cout << "f(20, 3) * s(30, 2)" << d << endl;

	d = f / s;
	cout << "f(20, 3) / s(30, 2)" << d << endl;

	d = f ^ s;
	cout << "f(20, 3) ^ s(30, 2)" << d << endl;

	cout << "f(20, 3)++" << f++ << endl;
	cout << "res = " << f << endl;
	cout << "++f(20, 3)" << ++f << endl;

	cout << "f(20, 3)--" << f-- << endl;
	cout << "res = " << f << endl;
	cout << "--f(20, 3)" << --f << endl;

	Pay t;
	int N;

	cout << "Enter arguments:" << endl;
	cin >> t;

	cout << "Кiлькiсть вiдпрацьованих днiв = "; cin >> N;
	
	cout << "summa = " << t.Summa(N) << endl;;
	
	system("pause");
	return 0;
}