/*
Question 13:
Write a C++ program to sort an array using Merge Sort
and then search for a given element using Binary Search.
*/

#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int temp[100];
    int i = low, j = mid + 1, k = low;

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
    int key;

    mergeSort(arr, 0, size - 1);

    cout << "Sorted Array:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\nEnter element to search: ";
    cin >> key;

    int low = 0, high = size - 1;
    int pos = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            pos = mid;
            break;
        }
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found.";

    return 0;
}