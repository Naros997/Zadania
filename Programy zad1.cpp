#include <iostream>

using namespace std;

double x;
int main() 
{
	cin >> x;

	if (x > 9 && x < 20)
	{
		cout << "Ta liczba miesci sie w przedziale [10, 20)"<<endl;
	}
	else
	{
		cout << "Ta liczba nie miesci sie w przedziale [10, 20)"<<endl;
	}
	
	system("pause");
}