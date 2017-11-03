#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


using namespace std;

double a1;
double a2;
double adelta;
double b1;
double b2;
double bdelta;
double c1;
double c2;
double cdelta;

int main()
{
	
	double adelta = (pow(2, 2) - 4 * (2 * (-12)));//delta A
	double a1 = ((-2 - (sqrt(pow(2, 2) - 4 * (2 * (-12))))) / (2 * 2));
	double a2 = ((-2 + (sqrt(pow(2, 2) - 4 * (2 * (-12))))) / (2 * 2));

	double bdelta = (pow(-2, 2) - 4 * (1 * (-15)));//delta B
	double b1 = (2 - (pow(-2, 2) - 4 * (1 * (-15))) / 2);
	double b2 = (2 + (pow(-2, 2) - 4 * (1 * (-15))) / 2);
		
	double cdelta = (pow(4, 2) - 4 * (1 * (4)));//delta B
	double c1 = (-4 - (pow(4, 2) - 4 * (1 * (4))) / 2);
	double c2 = (-4 + (pow(4, 2) - 4 * (1 * (4))) / 2);

cout << "W rownaniu A X1 wynosi: " << a1;
cout << " a X2: " << a2 << endl;
cout << "W rownaniu B X1 wynosi: " << b1; 
cout << " a X2: " << b2 << endl;
cout << "W rownaniu C X1 wynosi: " << c1;
cout << " a X2: "<<c2 << endl;
	system("pause");
}