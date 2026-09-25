/*
Question 14:
Write a C++ program to demonstrate the best-case behavior of
Bubble Sort and Insertion Sort using an already sorted array.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int bubbleComp = 0, insertionComp = 0;

    // Bubble Sort (Best Case)
    for(int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++)
        {
            bubbleComp++;
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }

    // Insertion Sort (Best Case)
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            insertionComp++;
            arr[j + 1] = arr[j];
            j--;
        }
        if(j >= 0)
            insertionComp++;

        arr[j + 1] = key;
    }

    cout << "Best Case Bubble Sort Comparisons : " << bubbleComp << endl;
    cout << "Best Case Insertion Sort Comparisons : " << insertionComp << endl;

    return 0;
}