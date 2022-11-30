#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100;
}

void Print(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << arr[i];
	cout << endl;
}

void Max(int* arr, const int size, int& maxindex)
{
	int i = 0;
	int max = arr[0]; 
	maxindex = i;
	for (i = 1; i < size; i++){
		if (arr[i] > max) {
			max = arr[i];
			maxindex = i;
		}
	}
}

void Min(int* arr, const int size, int& minindex)
{
	int i = 0;
	int min = arr[0];
	minindex = i;
	for (i = 1; i < size; i++){
		if (arr[i] < min) {
			min = arr[i];
			minindex = i;
		}

	}
}

void Swap(int* arr, const int size, int minindex, int maxindex)
{
	Max(arr, size, maxindex);
	Min(arr, size, minindex);
	int tmp;
	tmp = arr[maxindex];
	arr[maxindex] = arr[minindex];
	arr[minindex] = tmp;
}

void Modified_arr(int* arr, const int size, int minindex, int maxindex)
{
	Swap(arr, size, minindex, maxindex);
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << arr[i];
	}

	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 9;
	int arr[n];

	Create(arr, n);
	cout << "array:     ";
	Print(arr, n);

	cout << "mod_array: ";
	Modified_arr(arr, n, 0, 0);


	return 0;
}