// Lab_02.cpp
// Бондаренко Микола
// Лабораторна робота # 2.1
// Лінійні програми.
// Варіант 1

#include <iostream>

#include <math.h> 

using namespace std;

int main()
{
	double x; // вхідний параметр
	// double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "x = "; cin >> x;

	// z1 = 2 * sin(3 * 4 * atan(1.0) - 2 * x) * sin(3 * 4 * atan(1.0) - 2 * x) * cos(5 * 4 * atan(1.0) + 2 * x) * cos(5 * 4 * atan(1.0) + 2 * x);
	z2 = 1.0 / 4 - 1.0 / 4 * sin(5.0 / 2 * 4 * atan(1.0) - 8 * x);

	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
