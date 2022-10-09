// Lab_03_1.cpp
// Бондаренко Микола
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	double x7; // x^7
	double x5; // x^5

	cout << "x = "; cin >> x;

	A = 1 + 9 * x;

	x7 = x * x * x * x * x * x * x;
	x5 = x * x * x * x * x;

	// cпосіб 1:
	if (x <= 0)
		B = log(abs(sin(x))) + x7;
	if (0 < x && x <= 3)
		B = cos(abs(x + 1) / 2) / sin(abs(x + 1) / 2);
	if (x > 3)
		B = 3 * x - x5;
	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2
	if (x <= 0)
		B = log(abs(sin(x))) + x7;
	else
		if (0 < x && x <= 3)
			B = cos(abs(x + 1) / 2) / sin(abs(x + 1) / 2);
		else
			B = 3 * x - x5;
	y = A + B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}