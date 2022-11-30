#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Create(int* arr, const int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 10;
}

void Print(int* arr, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

void squares_arr_elements(int* arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = pow(arr[i], 2);
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int Sum(int* arr, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
    {
            S += arr[i];
    }
    return S;
}
int main()
{
    srand(time(NULL));

    const int n = 20;
    int arr[n];

    cout << "The number of array elements = " << n << endl;

    Create(arr, n);

    cout << "array:    ";
    Print(arr, n);

    cout << "mod.array: ";
    squares_arr_elements(arr, n);

    cout << "Sum = " << Sum(arr, n) << endl;

    return 0;
}