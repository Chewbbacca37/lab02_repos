#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int** a, const int Count, const int Low, const int High);
void Print(int** a, const int Count);
void Transponse(int** a, const int Count);

int main()
{
	srand((unsigned)time(NULL));

	int Low = -10;
	int High = 10;

	int n;
	cout << "size: "; cin >> n;
	
	int** a = new int* [n];

	for (int i = 0; i < n; i++)
		a[i] = new int[n];

	Create(a, n, Low, High);
	Print(a, n);
	Transponse(a, n);
	Print(a, n);

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;

	return 0;
}

void Create(int** a, const int Count, const int Low, const int High)
{
	for (int i = 0; i < Count; i++)
	{
		for (int j = 0; j < Count; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
	}
}

void Print(int** a, const int Count)
{
	cout << endl;
	for (int i = 0; i < Count; i++)
	{
		for (int j = 0; j < Count; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}

void Transponse(int** a, const int Count)
{
	int tmp;
	for (int i = 0; i < Count; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			tmp = a[j][i];
			a[j][i] = a[i][j];
			a[i][j] = tmp;
		}
	}
}