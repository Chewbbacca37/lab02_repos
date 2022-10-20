// Lab_04_4.cpp
// Бондаренко Микола
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double R, xp, xk, dx, x, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk) {
		if (x < -6 - R)
			y = 0;
		else
			if (-6 - R <= x && x <= -6)
				y = -sqrt(R * R - (x + 6) * (x + 6));
			else
				if (-6 < x && x <= -R)
					y = x + R;
				else
					if (-R < x && x <= 0)
						y = sqrt((R + x) * (R - x));
					else
						if (0 < x && x <= 3)
							y = R - x * R / 3;
						else
							y = R * (x - 3) / 6;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}