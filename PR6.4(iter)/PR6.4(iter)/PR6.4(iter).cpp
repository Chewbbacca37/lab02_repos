#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Sum(int* a, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) 
	{
		if (a[i] < 0)
			sum += a[i];
	}

	return sum;
}

int Max(int* a, const int size)
{
	int i = 0;
	int max = a[i];
	int maxindex = i;
	for (i = 1; i < size; i++)
		if (a[i] > max)
		{
			max = a[i];
			maxindex = i;
		}
	cout << "\nMax element: " << max << endl;
	return maxindex;
}

int Min(int* a, const int size)
{
	int i = 0;
	int min = a[i];
	int minindex = i;
	for (i = 1; i < size; i++)
		if (a[i] < min)
		{
			min = a[i];
			minindex = i;
		}
	cout << "\nMin element: " << min << endl;
	return minindex;
}

int Product(int* a, int size, int& minindex, int& maxindex)
{
	int tmpBigger = maxindex, tmpLess = minindex;
	int result = 1;
	if (minindex > maxindex) {
		tmpBigger = minindex;
		tmpLess = maxindex;
	}
	for (int i = tmpLess; i <= tmpBigger; i++) {
		result *= a[i];
	}

	return result;
}

void Sort(int* a, const int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = a[i];
		int imin = i;
		for (int j = i + 1; j < size; j++)
			if (min > a[j])
			{
				min = a[j];
				imin = j;
			}
		a[imin] = a[i];
		a[i] = min;
	}
}
int main() 
{
	srand((unsigned)time(NULL));

	int n;
	cout << "n = : "; cin >> n;

	int* a = new int[n];
	int min = -100;
	int max = 100;


	Create(a, n, min, max);
	cout << "array:     ";
	Print(a, n);
	int sum = Sum(a, n);
	cout << "\nSum: " << sum << endl;

	int max_element = Max(a, n);
	
	int min_element = Min(a, n);

	cout << "\nProduct: " << Product(a, n, max_element, min_element) << endl;

	Sort(a, n);

	cout << "sort_array: ";
	Print(a, n);

	return 0;
}


