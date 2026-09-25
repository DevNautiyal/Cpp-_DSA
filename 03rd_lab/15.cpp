/*
Question 15:
Write a C++ program to test Quick Sort on sorted,
reverse-sorted, and randomly arranged arrays and
observe the effect of pivot selection.
*/

#include <iostream>
using namespace std;

int swaps = 0;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
            swaps++;
        }
    }

    swap(arr[i + 1], arr[high]);
    swaps++;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int sorted[]  = {1, 2, 3, 4, 5};
    int reverse[] = {5, 4, 3, 2, 1};
    int random[]  = {3, 5, 1, 4, 2};

    int n = 5;

    // Sorted Array
    swaps = 0;
    quickSort(sorted, 0, n - 1);
    cout << "Sorted Array: ";
    printArray(sorted, n);
    cout << "Number of Swaps: " << swaps << endl << endl;

    // Reverse Sorted Array
    swaps = 0;
    quickSort(reverse, 0, n - 1);
    cout << "Reverse Sorted Array: ";
    printArray(reverse, n);
    cout << "Number of Swaps: " << swaps << endl << endl;

    // Random Array
    swaps = 0;
    quickSort(random, 0, n - 1);
    cout << "Random Array: ";
    printArray(random, n);
    cout << "Number of Swaps: " << swaps << endl;

    return 0;
}