/*
Question 8:
Write a C++ program to implement all five sorting algorithms:
Bubble, Insertion, Selection, Merge, and Quick Sort.
*/

#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
}

// Insertion Sort
void insertionSort(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

// Selection Sort
void selectionSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[min])
                min=j;

        swap(a[i],a[min]);
    }
}

// Merge Sort
void merge(int a[], int l, int m, int r)
{
    int n1=m-l+1, n2=r-m;
    int L[n1], R[n2];

    for(int i=0;i<n1;i++) L[i]=a[l+i];
    for(int i=0;i<n2;i++) R[i]=a[m+1+i];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
            a[k++]=L[i++];
        else
            a[k++]=R[j++];
    }

    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}

void mergeSort(int a[], int l, int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

// Quick Sort
int partition(int a[], int low, int high)
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
    return i+1;
}

void quickSort(int a[], int low, int high)
{
    if(low<high)
    {
        int p=partition(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);
    }
}

void printArray(int a[], int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]={5,2,9,1,7};
    int n=5;

    int choice;

    cout<<"1. Bubble Sort\n";
    cout<<"2. Insertion Sort\n";
    cout<<"3. Selection Sort\n";
    cout<<"4. Merge Sort\n";
    cout<<"5. Quick Sort\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1: bubbleSort(arr,n); break;
        case 2: insertionSort(arr,n); break;
        case 3: selectionSort(arr,n); break;
        case 4: mergeSort(arr,0,n-1); break;
        case 5: quickSort(arr,0,n-1); break;
        default:
            cout<<"Invalid Choice";
            return 0;
    }

    cout<<"Sorted Array: ";
    printArray(arr,n);

    return 0;
}