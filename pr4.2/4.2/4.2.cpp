// Lab_04_2.cpp
// Бондаренко Микола
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 1

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		 << setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk) {
		A = 1 + 9 * x;
		if (x <= 0)
			B = log(abs(sin(x))) + pow(x, 7);
		else
			if (0 < x && x <= 3)
				B = cos(abs(x + 1) / 2) / sin(abs(x + 1) / 2);
			else
				B = 3 * x - pow(x, 5);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			 << " |" << setw(10) << setprecision(3) << y
			 << " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}