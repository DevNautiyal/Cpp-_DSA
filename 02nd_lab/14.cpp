/*
Question 14:
Write a C++ program to implement any two sorting algorithms
and compare their number of comparisons for the same input array.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {5, 3, 8, 4, 2};
    int arr2[5] = {5, 3, 8, 4, 2};

    int bubbleComparisons = 0;
    int selectionComparisons = 0;

    // Bubble Sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            bubbleComparisons++;

            if (arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    // Selection Sort
    for (int i = 0; i < 4; i++)
    {
        int min = i;

        for (int j = i + 1; j < 5; j++)
        {
            selectionComparisons++;

            if (arr2[j] < arr2[min])
                min = j;
        }

        int temp = arr2[i];
        arr2[i] = arr2[min];
        arr2[min] = temp;
    }

    cout << "Bubble Sort Comparisons = " << bubbleComparisons << endl;
    cout << "Selection Sort Comparisons = " << selectionComparisons << endl;

    return 0;
}