#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;
double v;
double a;
double g = 6.67;
int main()
{
	cout << "Podaj kat rzutu :"; cin >> a;
	cout << "Podaj predkosc rzutu :"; cin >> v;
	double r = ((a * M_PI) / 180);
	double zasieg = ((v*v)*(sin(2*r))) / g;
	double czlot = (2 * v* sin(r)) / g;
	double maxlot = (pow(v* sin(r), 2) * 2 * g);
	cout << "Zasieg rzutu wynosi: "<< zasieg <<" metrow"<< endl;
	cout << "Czas lotu wynosi: "<< czlot << " sekund" << endl;
	cout << "Maksymalna wysokosc rzutu wynosi: "<< maxlot << " metrow" << endl;
	system("pause");
}
