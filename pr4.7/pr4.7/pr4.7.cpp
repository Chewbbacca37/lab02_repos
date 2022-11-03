#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double xp, xk, x, dx, eps, R = 0, S = 0, a = 0;
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
		n = 0;
		a = 1. / x;
		S = a;
		do {
			n++;
			R = 1 / ((2 * n + 1) * pow(x, 2 * n + 1));
			a *= R;
			S += a;
		} while (abs(a) >= eps);

		double result = 2 * S;
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