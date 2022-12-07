#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int** a, const int rowCount, const int colCount, const int Low,
	const int High, int i, int j);
void Print(int** a, const int rowCount, const int colCount, int i, int j);
void Input(int** a, const int rowCount, const int colCount, int i, int j);
int Calc(int** a, const int rowCount, const int colCount, int& k, int i, int j);
void Maxmore1(int** a, const int rowCount, const int colCount, int& t, int i, int j, int k);
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

	Create(a, rowCount, colCount, Low, High, 0, 0);
	cout << "\n";
	//Input(a, rowCount, colCount, 0, 0);
	cout << "\n";
	Print(a, rowCount, colCount, 0, 0);

	int k = 0;
	k = Calc(a, rowCount, colCount, k, 0, 0);
	cout << "k = " << k << endl;

	int t = 0;
	Maxmore1(a, rowCount, colCount, t, 0, 0, 0);
	cout << "t = " << t << endl;;

	for (int i = 0; i < rowCount; i++)
		delete[] a[i];
	delete[] a;

	return 0;
}

void Create(int** a, const int rowCount, const int colCount, const int Low,
	const int High, int i, int j)
{
	a[i][j] = Low + rand() % (High - Low + 1);

	if (j < colCount - 1)
		Create(a, rowCount, colCount, Low, High, i, j + 1);
	else
		if (i < rowCount - 1)
			Create(a, rowCount, colCount, Low, High, i + 1, 0);

}

void Input(int** a, const int rowCount, const int colCount, int i, int j)
{
	cout << "a[" << i << "][" << j << "] = ";
	cin >> a[i][j];

	if (j < colCount - 1)
		Input(a, rowCount, colCount, i, j + 1);
	else
		if (i < rowCount - 1)
		{
			cout << endl;
			Input(a, rowCount, colCount, i + 1, 0);
			
		}
}

void Print(int** a, const int rowCount, const int colCount, int i, int j)
{
	cout << setw(4) << a[i][j];
	if (j < colCount - 1)
		Print(a, rowCount, colCount, i, j + 1);
	else
		if (i < rowCount - 1)
		{
			cout << endl;
			Print(a, rowCount, colCount, i + 1, 0);
		}
		else
			cout << endl << endl;
}

int Calc(int** a, const int rowCount, const int colCount, int& k, int i, int j)
{
	bool checker = false;
	if (a[i][j] == 0)
	{
		checker = true;
		return Calc(a, rowCount, colCount, k, i + 1, 0);
	}

	if (j < colCount - 1)
	{
			return Calc(a, rowCount, colCount, k, i, j + 1);
	}

	if (checker == false)
		k++;
	checker = false;
	if (i < rowCount - 1)
		return Calc(a, rowCount, colCount, k, i + 1, 0);
	else
		return k;
	

}

void Maxmore1(int** a, const int rowCount, const int colCount, int& t, int i, int j, int k)
{		
	if (a[i][j] > t)
	{
		if (k < colCount - 1)
			if (j == k)
				Maxmore1(a, rowCount, colCount, t, i, j, k + 1);
		if (a[i][j] == a[i][k])
		{
			t = a[i][j];
			Maxmore1(a, rowCount, colCount, t, i, j + 1, 0);
		}

	}
	if (j < colCount - 1)
		Maxmore1(a, rowCount, colCount, t, i, j + 1, 0);
	if (i < rowCount - 1)
		Maxmore1(a, rowCount, colCount, t, i + 1, 0, 0);
}