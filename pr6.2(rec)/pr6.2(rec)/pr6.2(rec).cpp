#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* arr, const int size, int i)
{
    arr[i] = rand() % 100;
    if (i < size - 1)
        Create(arr, size, i + 1);
}

void Print(int* arr, const int size, int i)
{
    cout << setw(4) << arr[i];
    if (i < size - 1)
        Print(arr, size, i + 1);
    else
        cout << endl;
}

void Max(int* arr, const int size, int& maxindex, int i, int& max)
{

    if (i < size)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;

        }
        Max(arr, size, maxindex, i + 1, max);
    }
}

void Min(int* arr, const int size, int& minindex, int i, int& min)
{

    if (i < size)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minindex = i;

        }
        Min(arr, size, minindex, i + 1, min);
    }
}

void Swap(int* arr, const int size, int minindex, int maxindex, int i, int max, int min)
{

    int tmp;
    tmp = arr[maxindex];
    arr[maxindex] = arr[minindex];
    arr[minindex] = tmp;
}

void Modified_arr(int* arr, const int size, int i)
{
    if (i < size)
    {
        cout << setw(4) << arr[i];
        Modified_arr(arr, size, i + 1);
    }

    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 9;
    int arr[n];

    Create(arr, n, 0);
    cout << "array:     ";
    Print(arr, n, 0);
    int max = arr[0];
    int maxindex = 0;
    int min = arr[0];
    int minindex = 0;
    Max(arr, n, maxindex, 0, max);
    Min(arr, n, minindex, 0, min);
    cout << "mod_array: ";
    Swap(arr, n, minindex, maxindex, 0, max, min);
    Modified_arr(arr, n, 0);


    return 0;
}