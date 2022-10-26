// Lab_04_5.cpp
// Бондаренко Микола
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 1

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main() {
	double x, y, R;

	srand((unsigned)time(NULL));

	//спосіб 1:

	for (int i = 0; i < 3; i++) {
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (pow(x, 2) + pow(y, 2) <= pow(R, 2)) {

			if (((y >= 0 && x >= 0) && y >= x) ||
				((y <= 0 && x <= 0) && y <= x))
				cout << "the Dot is in the sector" << endl;
			else
				cout << "the Dot isn`t in the sector" << endl;
		}
		else {
			cout << endl << "Dot isn`t in the circle" << endl;
		}
	}

	cout << endl << fixed;

	//спосіб 2:

	for (int i = 0; i < 10; i++) {

		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;
		R = 6. * rand() / RAND_MAX - 3;

		if (pow(x, 2) + pow(y, 2) <= pow(R, 2)) {

			if (((y >= 0 && x >= 0) && y >= x) || ((y <= 0 && x <= 0) && y <= x)) {
				cout << setw(8) << setprecision(4) << x << " |"
					 << setw(8) << setprecision(4) << y << " |"
					 << setw(8) << setprecision(4) << R << " |" << "the Dot is in the sector" << endl;
			}

			else {
				cout << setw(8) << setprecision(4) << x << " |"
					 << setw(8) << setprecision(4) << y << " |"
					 << setw(8) << setprecision(4) << R << " |" << "the Dot isn`t in the sector" << endl;
			}
		}
		else {
			cout << setw(8) << setprecision(4) << x << " |"
				 << setw(8) << setprecision(4) << y << " |"
				 << setw(8) << setprecision(4) << R << " |" << "Dot isn`t in the circle" << endl;
		} 

	}

	return 0;
}