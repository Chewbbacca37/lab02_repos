#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int** a, const int rowCount, const int colCount, const int Low,
	const int High);
void Print(int** a, const int rowCount, const int colCount);
void Input(int** a, const int rowCount, const int colCount);
int Calc(int** a, const int rowCount, const int colCount, int& k);
void Maxmore1(int** a, const int rowCount, const int colCount, int& t);
int main()
{
	srand((unsigned)time(NULL));

	int Low = -10;
	int High = 20;

	int rowCount;
	int colCount;

	cout << "row: "; cin >> rowCount;
	cout << "\ncol: "; cin >> colCount;

	int** a = new int* [rowCount];
	for (int i = 0; i < rowCount; i++)
		a[i] = new int[colCount];

	Create(a, rowCount, colCount, Low, High);
	//Input(a, rowCount, colCount);

	Print(a, rowCount, colCount);

	int k = 0;
	cout << "k = " << Calc(a, rowCount, colCount, k) << endl;

	int t = 0;
	Maxmore1(a, rowCount, colCount, t);
	cout << "t = " << t << endl;;

	for (int i = 0; i < rowCount; i++)
		delete[] a[i];
	delete[] a;

	return 0;
}

void Create(int** a, const int rowCount, const int colCount, const int Low,
	const int High)
{
	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}

void Input(int** a, const int rowCount, const int colCount)
{
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
		cout << endl;
	}
}

void Print(int** a, const int rowCount, const int colCount)
{
	cout << endl;
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}

int Calc(int** a, const int rowCount, const int colCount, int& k)
{
	k = 0;
	bool checker = false;
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
			if (a[i][j] == 0)
			{
				checker = true;
			}
		if (checker == false)
		{
			k++;
		}
		checker = false;
	}
	return k;
}

void Maxmore1(int** a, const int rowCount, const int colCount, int& t)
{
	for (int i = 0; i < rowCount; i++) {
		for (int j = 0; j < colCount; j++) {
			if (a[i][j] > t) {

				for (int k = 0; k < colCount; k++) {
					if (j == k) continue;
					if (a[i][j] == a[i][k]) {
						t = a[i][j];
						break;
					}
				}
			}
		}
	}
}