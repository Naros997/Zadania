#include <iostream>
#include <cmath>

using namespace std;

double xa;
double ya; 
double xb; 
double yb; 
double xc; 
double yc;
double bok1;
double bok2;
double bok3;


int main()
{
	cout << "Podaj wspolzedne X punktu A:";
	cin >> xa;
	cout << "Podaj wspolzedne Y punktu A:";
	cin >> ya;
	cout << "Podaj wspolzedne X punktu B:";
	cin >> xb; 
	cout << "Podaj wspolzedne Y punktu B:";
	cin >> yb;
	cout << "Podaj wspolzedne X punktu C:";
	cin >> xc;
	cout << "Podaj wspolzedne Y punktu C:";
	cin >> yc;
	double bok1 = sqrt(pow(xa - xb, 2) + (pow(ya - yb, 2)));
	double bok2 = sqrt(pow(xb - xc, 2) + (pow(yb - yc, 2)));
	double bok3 = sqrt(pow(xa - xc, 2) + (pow(ya - yc, 2)));
	

	if ((bok1*bok1 + bok2*bok2) == (bok3*bok3) || (bok2*bok2 + bok3*bok3) == (bok1*bok1) || (bok1*bok1 + bok3*bok3) == (bok2*bok2))
	{
	cout << "Trojkat jest prostokatny.";
	}
	else
	{
		cout << "Trojkat nie jest prostokatny." ;
	}
	system("pause");
	return 0;
	

}