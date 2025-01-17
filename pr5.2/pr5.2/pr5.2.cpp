// ����������� ������ � 5.2

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S(const double x, const double eps, int &n, double &s);
double A(const double x, const int n, double& a);

int main() {
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
		cout << "-------------------------------------------------" << endl;
		cout << "|" << setw(5) << "x" << " |"
			<< setw(16) << "log((x + 1) / (x - 1))" << " |"
			<< setw(7) << "S" << " |"
			<< setw(5) << "n" << " |"
			<< endl;
		cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		S(x, eps, n, s);

		double result = 2 * s;
		cout << "|" << setw(5) << setprecision(2) << x << " |"
			<< setw(22) << setprecision(5) << log((x + 1) / (x - 1)) << " |"
			<< setw(7) << setprecision(5) << result << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
		cout << "-------------------------------------------------" << endl;

	return 0;
}

double S(const double x, const double eps, int& n, double& s)
{
	n = 0;
	double a = 1. / x;
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
	return s;
}
double A(const double x, const int n, double& a)
{
	double R = (2 * n - 1.) / ((2 * n + 1.) * pow(x, 2));
	a *= R;
	return a;
}

	
