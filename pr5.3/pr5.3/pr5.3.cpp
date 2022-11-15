#include <iostream>
#include <cmath>

using namespace std;

double z(const double x);
int factorial(int i);

int main()
{
	double kp, kk, res;
	int n;

	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;

	double dk = (kk - kp) / n;

	double k = kp;

	while (k <= kk)
	{
		res = z(2 * k + 1) - pow(z(2 * k - 1), 2) + sqrt(z(k));
		cout << k << "   " << res << endl;
		k += dk;
	}

	return 0;
}

double z(const double x)
{
	if (abs(x) >= 1)
		return ((cos(x) + 1) / (pow(sin(x), 2) + exp(x)));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		double q = 1. / exp(x);
		do
		{
			j++;
			double R = pow(-1., j) * pow(x, j) / factorial(j);
			a *= R;
			S += a;
		} while (j < 7);
		return S;
	}
}

int factorial(int i)
{
	if (i == 0)
		return 1;
	else
		return i * factorial(i - 1);
}
