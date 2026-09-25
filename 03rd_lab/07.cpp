/*
Question 7:
Write a C++ program to implement Quick Sort and display the array after each partition.
*/

#include <iostream>
using namespace std;

void print(int a[], int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int partition(int a[], int low, int high, int n)
{
    int pivot=a[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }

    swap(a[i+1],a[high]);

    cout<<"After Partition: ";
    print(a,n);

    return i+1;
}

void quickSort(int a[], int low, int high, int n)
{
    if(low<high)
    {
        int p=partition(a,low,high,n);
        quickSort(a,low,p-1,n);
        quickSort(a,p+1,high,n);
    }
}

int main()
{
    int a[]={10,7,8,9,1,5};
    int n=6;

    quickSort(a,0,n-1,n);

    cout<<"Sorted Array: ";
    print(a,n);

    return 0;
}