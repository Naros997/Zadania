#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double x;
double y;
int main()
{
	
	cout << "Podaj x :";
	cin >> x;
	cout << "Podaj y :";
	cin >> y;
	double rx = ((x * M_PI) / 180);//radiany x
	double ry = ((y * M_PI) / 180);//radiany y
	double f1 = ((1 / 8)*(sqrt(x + (2 * y))) - (pow(M_E, 3) + M_PI));
	double f2 = (pow(tan(pow(2, rx + 1)),-1) + ((pow(2*x, y) + M_E - 10) / (M_LN2*(abs(x + 1)))) + (sqrt(x*y) / pow(M_PI, 2)));
	double f3 = (pow(M_E, (x + y)) + sin((pow(rx, 2) + (1 / (4 * y)) / 8)));
	double f4 = (((pow(x, 4) + (pow(tan((M_LN2*(abs(rx + y)))),-1)) / abs((pow(2 * x, 3) + pow(y, 4)))) - pow(1 / 8 * x*y,pow( M_E, x)))/sqrt(x+y+pow(M_E,pow(M_E,2))));
	double f5 = (sin(cos(pow(1 / 3 * rx*ry, -3))) + log(2 * x) + M_LN2*(3 * y) + sqrt(x + (pow((y*M_E, (pow(M_E, x + 2))), 10))) + sqrt(pow(x, y) + 1));

	

	cout << "Wynik dzialania 1 =" << f1 << endl;
	cout << "Wynik dzialania 2 =" << f2 << endl;
	cout << "Wynik dzialania 3 =" << f3 << endl;
	cout << "Wynik dzialania 4 =" << f4 << endl;
	cout << "Wynik dzialania 5 =" << f5 << endl;
	
		system("pause");
}