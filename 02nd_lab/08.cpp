/*
Question 8:
Write a C++ program to implement Merge Sort using separate
functions for merging and sorting.
*/

#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int temp[100];

    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= high)
        temp[k++] = arr[j++];

    for (int i = low; i <= high; i++)
        arr[i] = temp[i];
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[6] = {8, 3, 5, 1, 9, 2};
    int size = 6;

    mergeSort(arr, 0, size - 1);

    cout << "Sorted Array:\n";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}