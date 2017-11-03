#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;


double n;
double x;
int main()
{
	cout << "Prosze wprowadzic liczbe n :";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if ((i % 2) == 1)
			x += i;
	}

	cout << "Suma liczb nieparzystych wynosi " << x << endl;
	system("pause");
}