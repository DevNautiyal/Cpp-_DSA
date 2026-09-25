/*
Question 9:
Take the same input array and sort it using Bubble Sort,
Insertion Sort, and Selection Sort.
Compare the number of comparisons and swaps.
*/

#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    int comp = 0, swaps = 0;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            comp++;
            if(a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swaps++;
            }
        }
    }

    cout << "Bubble Sort : Comparisons = " << comp
         << ", Swaps = " << swaps << endl;
}

void insertionSort(int a[], int n)
{
    int comp = 0, swaps = 0;

    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while(j >= 0)
        {
            comp++;
            if(a[j] > key)
            {
                a[j + 1] = a[j];
                swaps++;
                j--;
            }
            else
                break;
        }
        a[j + 1] = key;
    }

    cout << "Insertion Sort : Comparisons = " << comp
         << ", Swaps = " << swaps << endl;
}

void selectionSort(int a[], int n)
{
    int comp = 0, swaps = 0;

    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            comp++;
            if(a[j] < a[min])
                min = j;
        }

        if(min != i)
        {
            swap(a[i], a[min]);
            swaps++;
        }
    }

    cout << "Selection Sort : Comparisons = " << comp
         << ", Swaps = " << swaps << endl;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int a1[n], a2[n], a3[n];

    for(int i = 0; i < n; i++)
    {
        a1[i] = arr[i];
        a2[i] = arr[i];
        a3[i] = arr[i];
    }

    bubbleSort(a1, n);
    insertionSort(a2, n);
    selectionSort(a3, n);

    return 0;
}