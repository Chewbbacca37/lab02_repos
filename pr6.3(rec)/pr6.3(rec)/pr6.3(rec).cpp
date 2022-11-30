#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Create(int* arr, const int size, int i)
{
    arr[i] = rand() % 10;
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

void squares_arr_elements(int* arr, const int size, int i)
{
    arr[i] = pow(arr[i], 2);
    cout << setw(4) << arr[i];
    if (i < size - 1)
    {
        squares_arr_elements(arr, size, i + 1);
    }
}

int Sum(int* arr, const int size, int i)
{
    if (i < size)
    {
        return arr[i] + Sum(arr, size, i + 1);
    }
    else
        return 0;
}
int main()
{
    srand(time(NULL));

    const int n = 20;
    int arr[n];

    cout << "The number of array elements = " << n << endl;

    Create(arr, n, 0);

    cout << "array:    ";
    Print(arr, n, 0);

    cout << "mod.array: ";
    squares_arr_elements(arr, n, 0);
    cout << endl;

    cout << "Sum = " << Sum(arr, n, 0) << endl;

    return 0;
}