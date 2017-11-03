#include <iostream>


using namespace std;

bool woda;
bool gaz;
bool woda2;
bool mleko;
bool cukier;

int main()
{
	cout <<"1=Tak 0=Nie" <<endl<<"Czy w czajniku jest woda ?";
	cin >> woda;
	if (woda) 
		{
			cout << "Czy gaz zostal wlaczony ?";
			cin >> gaz;
	if (gaz=!gaz)
	{
		cout << "Wlacz gaz !"<<endl;
		system("pause");
		return 0;
	}

	}	
	else
	{
		cout << "Nalej wody do czajnika !"<<endl;
		system("pause");
		return 0;
	}
	cout << "Nastepnie postaw czajnik na palniku."<< endl;

	cout << "Czy woda sie zagotowala?";
	cin >> woda2;
	if (woda2)
	{
		cout << "Zalej kawe." << endl;
	}
	else 
	{
		cout << "Poczekaj az sie zagotuje !"<<endl;
		system("pause");
		return 0;
	}
	cout << "Czy kawa ma byc z mlekiem?";
	cin >> mleko;
	if (mleko) 
	{
		cout << "Dolej mleka!" << endl;
	}
	cout << "Czy kawa ma byc z cukrem ?";
	cin >> cukier;
	if (cukier) 
	{
		cout << "Dosyp cukru !" << endl;
	}

	
		cout << "Kawa gotowa." << endl;
	
	
	system("pause");


}