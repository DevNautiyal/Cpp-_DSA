/*
Question 12:
Write a C++ program to sort an array in ascending order and then
in descending order using a sorting algorithm of your choice.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[]={5,2,8,1,4};
    int n=5;

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);

    cout<<"Ascending: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";

    cout<<"\nDescending: ";
    for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";

    return 0;
}