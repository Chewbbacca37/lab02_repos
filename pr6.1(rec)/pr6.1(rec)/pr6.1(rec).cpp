#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Create(int* arr, const int SIZE, const int Low, const int High, int i)
{
    arr[i] = Low + rand() % (High - Low + 1);
    if (i < SIZE - 1)
        Create(arr, SIZE, Low, High, i + 1);
}

void Print(int* arr, const int SIZE, int i)
{
    cout << setw(4) << arr[i];
    if (i < SIZE - 1)
        Print(arr, SIZE, i + 1);
    else
        cout << endl;
}

int Sum(int* arr, const int SIZE, int i)
{
    if (i < SIZE)
        return arr[i] + Sum(arr, SIZE, i + 1);
    else
        return 0;
}

void Modified_arr(int* arr, const int SIZE, const int Low, const int High, int i)
{
    if (i < SIZE - 1)
    {
        if (arr[i] > 0 && (arr[i] % 5) != 0)
        {
            arr[i] = 0;
            cout << setw(4) << arr[i];
        }
        else
            cout << setw(4) << arr[i];
        Modified_arr(arr, SIZE, Low, High, i + 1);
    }
}

int main()
{
    srand(time(NULL));

    const int SIZE = 20;
    int arr[SIZE];

    int Low = -20;
    int High = 50;

    cout << "The number of array elements = " << SIZE << endl;

    Create(arr, SIZE, Low, High, 0);

    cout << "array: ";
    Print(arr, SIZE, 0);

    cout << "Sum = " << Sum(arr, SIZE, 0) << endl;

    cout << "modified array: ";
    Modified_arr(arr, SIZE, Low, High, 0);

    return 0;
}