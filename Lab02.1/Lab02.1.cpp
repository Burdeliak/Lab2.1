#include <iostream>
using namespace std;
int main()
{
	double alpa;
	double z1;
	double z2;

	cout << "alpa = "; cin >> alpa;
	z1 = (sin(2 * alpa) + sin(5 * alpa) - sin(3 * alpa)) / (cos(alpa) + 1 - 2 * (sin(2 * alpa) * sin(2 * alpa)));
	z2 = 2 * sin(alpa);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;


	cin.get();
	return 0;

}