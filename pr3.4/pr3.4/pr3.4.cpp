// Lab_03_4.cpp
// Бондаренко Микола
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 1


#include <iostream>

using namespace std;

int main()
{
	
	double R, x, y;

	cout << endl<<" R :" << endl; cin >> R;

	cout << endl << " X :" << endl; cin >> x;

	cout << endl << " Y :" << endl; cin >> y;

	if (pow(x, 2) + pow(y, 2) <= pow(R, 2)) {
		
		if (((y >= 0 && x >= 0) && y >= x) || ((y <= 0 && x <= 0) && y <= x))
			cout << endl << endl << "the Dot is in the sector";
		else
			cout << endl << "the Dot isn`t in the sector";
	}
	else { cout << endl << "Dot isn`t in the circle"; }
	
	cin.get();
	return 0;
}
