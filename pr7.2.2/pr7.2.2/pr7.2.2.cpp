#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int** a, const int Count, const int Low, const int High, int i, int j);
void Print(int** a, const int Count, int i, int j);
void Transponse(int** a, const int Count, int i, int j);

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

	Create(a, n, Low, High, 0, 0);
	Print(a, n, 0, 0);
	Transponse(a, n, 0, 0);
	Print(a, n, 0, 0);

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;

	return 0;
}

void Create(int** a, const int Count, const int Low, const int High, int i, int j)
{
	a[i][j] = Low + rand() % (High - Low + 1);

	if (j < Count - 1)
		Create(a, Count, Low, High, i, j + 1);
	else
		if (i < Count - 1)
			Create(a, Count, Low, High, i + 1, 0);

}

void Print(int** a, const int Count, int i, int j)
{
	cout << setw(4) << a[i][j];
	if (j < Count - 1)
		Print(a, Count, i, j + 1);
	else
		if (i < Count - 1)
		{
			cout << endl;
			Print(a, Count, i + 1, 0);
		}
		else
			cout << endl << endl;
}

void Transponse(int** a, const int Count, int i, int j)
{
	int tmp;
	tmp = a[j][i];
	a[j][i] = a[i][j];
	a[i][j] = tmp;

	if (j < i)
		Transponse(a, Count, i, j + 1);
	else
		if (i < Count - 1)
			Transponse(a, Count, i + 1, 0);
}