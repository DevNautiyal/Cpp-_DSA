/*
Question 9:
Write a C++ program to implement Quick Sort using
the last element as the pivot.
*/

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main()
{
    int arr[6] = {8, 3, 5, 1, 9, 2};
    int size = 6;

    quickSort(arr, 0, size - 1);

    cout << "Sorted Array:\n";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}