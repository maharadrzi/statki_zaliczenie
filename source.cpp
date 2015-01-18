#include "source.h"
#include <iostream>
using namespace std;

void rys(char t[10][10])
{

	cout <<"  ";
	
	for (int i = 0; i<10; i++)
	{
		cout << i << " ";
	}

	cout <<endl;

	for (int i = 0; i<10; i++)
	{
		cout << i << " ";
		for (int j = 0; j<10; j++)
		{
			cout << t[i][j] << " ";
		}
		
		cout <<endl;
	}

	                    
	cout <<endl;

}

void zer(char t[10][10])
{
	for (int i = 0; i<10; i++)
	{
		for (int j = 0; j<10; j++)
		{
			t[i][j] = 'O';
		}
	}
}

void menu()
{
	int tryb_gry;
	cout << "BATTLESHIPS" << endl;
	cout << "Wybierz tryb gry: " << endl;
	cout << "1. Człowiek vs Człowiek(nowa gra)" << endl;
	cout << "2. Człowiek vs Człowiek(wczytaj grę)" << endl;
	cout << "3. Człowiek vs Komputer(nowa gra)" << endl;
	cout << "4. Człowiek vs Komputer(wczytaj grę)" << endl;
	cin >> tryb_gry;

	switch (tryb_gry)
	{
	case 1:

		break;

	case 2:
	
		break;

	case 3:
		
		break;

	case 4:
		
		break;

	default:
		system("CLS");
		menu();

	}
}
