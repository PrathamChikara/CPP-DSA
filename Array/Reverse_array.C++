#include <iostream>
using namespace std;

void Print_Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

void Reverse_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];   // can also use direct swap(int) function
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Original Array" << endl;

    Print_Array(arr, size);
    cout << endl
         << "New Reversed Array" << endl;

    Reverse_array(arr, size);
    Print_Array(arr, size);

    return 0;
}