#include <iostream>
#include <cmath>

using namespace std;

double k(double const x, double const y);

int main() {
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double res = (k(1 + p * q, pow(q, 2)) + pow(k(p, pow(p, 2)), 2))
		/ (1 + k(p * q + pow(q, 2), p));

	cout << "res = " << res << endl;

	return 0;
}

double k(double const x, double const y)
{
	return (x / (1 + pow(sin(y), 2) + y / (1 + pow(x, 2))));
}

/* Unit test
int sum(int a, int b)
{
	return a + b;
}
*/