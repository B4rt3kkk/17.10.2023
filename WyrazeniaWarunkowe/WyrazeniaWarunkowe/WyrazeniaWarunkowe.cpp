#include <iostream>
using namespace std;

int main()
{
	/*
	int liczba = 1; 
	// jesli liczba == 1 to napisz to jest "super kuper mega liczba"  w przeciwnym układzie napisz: "liczba" 

	liczba == 1 ? cout << "to jest super kuper mega liczba" : cout << "liczba";
	*/
	// zamien liczbe na ocene: 6 - celujący, 5 - bdb, 4 - db, 3- dost, 2 - dop, 1 - ndst, 0 lub inna liczba: nie ma takiej oceny

	// ver 1 if else if

	int ocena;
	cout << "podaj liczbe jako ocena = "; cin >> ocena;
	/*
	if (ocena == 6) cout << "celujacy" << endl;
	else if (ocena == 5) cout << "bdb" << endl;
	else if (ocena == 4) cout << "db" << endl;
	else if (ocena == 3) cout << "dost" << endl;
	else if (ocena == 2) cout << "dop" << endl;
	else if (ocena == 1) cout << "ndst" << endl;
	else cout << "nie ma takiej oceny" << endl;
	*/
	// ver 2 wye skr. warunke ? prawda : fałsz;
	ocena == 6 ? (cout << "celujacy" << endl)
		: (ocena == 5 ? (cout << "bdb" << endl)
			: (ocena == 4 ? (cout << "db" << endl)
				: (ocena == 3 ? (cout << "dost" << endl)
					: (ocena == 2 ? (cout << "dop" << endl)
						: (ocena == 1 ? (cout << "ndst" << endl)
							: (cout << "nie ma takiej oceny" << endl) )))));
	return 0;
}
