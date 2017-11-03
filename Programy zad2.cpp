#include <iostream>
#include <cmath>
using namespace std;

double x;
double y;
int main()
{	
	cout << "Podaj x :";
	cin >> x;
	cout << "Podaj y :" ;
	cin >> y;

	if ((x > -20 && x < 6)&&(y>14 && y<101))
	{
		cout << "X i Y miesci sie w przedziale" << endl;
	}
	else if (x > -20 && x < 6)
	{
		cout << "Y nie miesci sie w przedziale" << endl;
	}
	else if (y>14 && y<101)
	{
		cout << "X nie miesci sie w przedziale" << endl;
	}
	else
	{
		cout << "X i Y nie miesci sie w przedziale" << endl;
	}

	system("pause");
}