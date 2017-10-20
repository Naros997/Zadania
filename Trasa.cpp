#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;
double b1 = 49.821375, b2 = 19.057508;//Bielsko
double c1 = 49.913270, c2 = 18.988607;//Czechowice
double o1 = 50.033920, o2 = 19.210440;//Oœwiêcim
double k1 = 49.880450, k2 = 19.222911;//Kêty
int main()
{
	//Trasa BB-Kêty-Oœwiêcim
	double trasa1 = sqrt(pow(b1 - k1 - o1, 2) + (pow(b2 - k2 - o2, 2)));
	cout << "Trasa przez BB - Kety - Oswiecim wynosi :" << trasa1 << endl;

	//Trasa BB-Czechowice-Oœwiêcim
	double trasa2 = sqrt(pow(b1 - c1 - o1, 2) + (pow(b2 - c2 - o2, 2)));
	cout << "Trasa przez BB - Czechowice - Oswiecim wynosi :" << trasa2 << endl;

	if (trasa1 > trasa2)
	{
		cout << "Trasa przez BB - Czechowice - Oswiecim jest szybsza "<< endl;
	}
	else
		cout << "Trasa przez BB - Kety - Oswiecim jest szybsza"<< endl;

	system("pause");
}