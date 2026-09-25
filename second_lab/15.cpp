/*
Question 15:
Write a C++ program to implement any three sorting algorithms
and display their Best, Average, and Worst-case time complexities.
*/

#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

// Insertion Sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Selection Sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        swap(arr[i], arr[min]);
    }
}

// Function to print array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr1[] = {64, 34, 25, 12, 22};
    int arr2[] = {64, 34, 25, 12, 22};
    int arr3[] = {64, 34, 25, 12, 22};

    int n = 5;

    cout << "Original Array:\n";
    printArray(arr1, n);

    bubbleSort(arr1, n);
    cout << "\nBubble Sort:\n";
    printArray(arr1, n);

    insertionSort(arr2, n);
    cout << "\nInsertion Sort:\n";
    printArray(arr2, n);

    selectionSort(arr3, n);
    cout << "\nSelection Sort:\n";
    printArray(arr3, n);

    cout << "\nTime Complexities\n";
    cout << "-----------------------------------------\n";
    cout << "Bubble Sort\n";
    cout << "Best    : O(n)\n";
    cout << "Average : O(n^2)\n";
    cout << "Worst   : O(n^2)\n\n";

    cout << "Insertion Sort\n";
    cout << "Best    : O(n)\n";
    cout << "Average : O(n^2)\n";
    cout << "Worst   : O(n^2)\n\n";

    cout << "Selection Sort\n";
    cout << "Best    : O(n^2)\n";
    cout << "Average : O(n^2)\n";
    cout << "Worst   : O(n^2)\n";

    return 0;
}