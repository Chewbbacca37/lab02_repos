#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

int Sum(int* a, const int size, int i)
{
    if (i < size)
    {
        if (a[i] < 0)
            return a[i] + Sum(a, size, i + 1);
        else
            return Sum(a, size, i + 1);
    }
    else
        return 0;
}

int Max(int* a, const int size, int i, int& maxindex, int& max)
{
	if (i < size)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxindex = i;
		}
		Max(a, size, i + 1, maxindex, max);
	}
	return maxindex;
}

int Min(int* a, const int size, int i, int& minindex, int& min)
{
	if (i < size)
	{
		if (a[i] < min)
		{
			min = a[i];
			minindex = i;
		}
		Min(a, size, i + 1, minindex, min);
	}
	return minindex;
}

void BiggerLess(int& minindex, int& maxindex, int& tmpBigger, int& tmpLess)
{
	if (minindex > maxindex)
	{
		tmpBigger = minindex;
		tmpLess = maxindex;
	}
}
int Product(int* a, int size, int& minindex, int& maxindex, int& tmpBigger, int& tmpLess, int result, int i)
{

	if (i <= tmpBigger)
	{
		return a[i] * Product(a, size, minindex, maxindex, tmpBigger, tmpLess, result, i + 1);
	}
	else
		return 1;
}

void Sort(int* a, const int size, int i, int& minindex)
{
	int min = a[i];
	minindex = i;

	Min(a, size, i, minindex, min);

	a[minindex] = a[i];
	a[i] = min;

	if (i < size - 2)
		Sort(a, size, i + 1, minindex);
}
int main()
{
	srand((unsigned)time(NULL));

	int n;
	cout << "n = : "; cin >> n;

	int* a = new int[n];
	int Low = -100;
	int High = 100;


	Create(a, n, Low, High, 0);
	cout << "array:     ";
	Print(a, n, 0);
	int sum = Sum(a, n, 0);
	cout << "\nSum: " << sum << endl;

	int max = a[0];
	int maxindex = 0;
	int max_element = Max(a, n, 0, maxindex, max);

	int min = a[0];
	int minindex = 0;
	int min_element = Min(a, n, 0, minindex, min);

	cout << "\nMax element: " << max << endl;
	cout << "\nMin element: " << min << endl;

	int tmpBigger = maxindex, tmpLess = minindex;
	BiggerLess(minindex, maxindex, tmpBigger, tmpLess);


	cout << "\nProduct: " << Product(a, n, min_element, max_element, tmpBigger, tmpLess, 1, tmpLess) << endl;
	

	Sort(a, n, 0, minindex);

	cout << "sort_array: ";
	Print(a, n, 0);

	return 0;
}