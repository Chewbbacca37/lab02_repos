// Lab_03_3cpp
// Бондаренко Микола
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 1

#include <iostream>
#include <limits>
#include <locale>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	setlocale(LC_CTYPE, "ukr");

	bool checker = true;

	while (checker) {
		
		cout << "Задайте R, але вона повинна задовольняти умову (-6 < R < 6): ";

		cin >> R;
		if (-6 < R && R < 6) {
			checker = false;
		}
		else { cout << endl << "Ви ввели нете число" << endl; }
	}
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x < -6 - R)
		y = 0;
	else
		if (-6 - R <= x && x <= -6)
			y = sqrt((R + x + 6) * (R - x - 6));
		else
			if (-6 < x && x <= -R)
				y = R * (x - R) / (R + 6);
			else
				if (-R < x && x <= 0)
					y = sqrt((R + x) * (R - x));
				else
					if (0 < x && x <= 3)
						y = R - x * R / 3;
					else
						y = R * (x - 3) / 6;
	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}