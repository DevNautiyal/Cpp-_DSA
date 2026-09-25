/*
Question 10:
Take the same input array and sort it using Merge Sort and Quick Sort.
Compare their time and space complexity.
*/

#include <iostream>
using namespace std;

// Merge Sort
void merge(int a[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
        L[i] = a[l + i];

    for(int i = 0; i < n2; i++)
        R[i] = a[m + 1 + i];

    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }

    while(i < n1)
        a[k++] = L[i++];

    while(j < n2)
        a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

// Quick Sort
int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], arr1[n], arr2[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr1[i] = arr[i];
        arr2[i] = arr[i];
    }

    mergeSort(arr1, 0, n - 1);
    quickSort(arr2, 0, n - 1);

    cout << "\nMerge Sort: ";
    printArray(arr1, n);

    cout << "Quick Sort: ";
    printArray(arr2, n);

    cout << "\nTime and Space Complexity\n";
    cout << "Merge Sort : Time = O(n log n), Space = O(n)\n";
    cout << "Quick Sort : Best/Average = O(n log n), Worst = O(n^2), Space = O(log n)\n";

    return 0;
}