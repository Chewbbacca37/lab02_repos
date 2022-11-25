#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Create(int* arr, const int SIZE, const int Low, const int High)
{
    for (int i = 0; i < SIZE; i++)
        arr[i] = Low + rand() % (High - Low + 1);
}

void Print(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

int Sum(int* arr, const int SIZE)
{
    int S = 0;
    for (int i = 0; i < SIZE; i++) 
    {
        if (arr[i] > 0 && (arr[i] % 5) != 0)
            S += arr[i];
    }
    return S;
}

void Modified_arr(int* arr, const int SIZE, const int Low, const int High)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0 && (arr[i] % 5) != 0)
        {
            arr[i] = 0;
            cout << setw(4) << arr[i];
        }
        else
            cout << setw(4) << arr[i];
    }
    cout << endl;
}
int main()
{
    srand(time(NULL));

    const int SIZE = 20;
    int arr[SIZE];

    int Low = -20;
    int High = 50;

    cout << "The number of array elements = " << SIZE << endl;

    Create(arr, SIZE, Low, High);

    cout << "array: ";
    Print(arr, SIZE);

    cout << "Sum = " << Sum(arr, SIZE) << endl;

    cout << "modified array: ";
    Modified_arr(arr, SIZE, Low, High);

    return 0;
}
