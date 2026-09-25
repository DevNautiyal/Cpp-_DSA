/*
Question 13:
Write a C++ program to count the number of comparisons performed
by Bubble Sort, Insertion Sort, and Selection Sort for a given input.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;
    int a1[5], a2[5], a3[5];

    for(int i = 0; i < n; i++)
    {
        a1[i] = arr[i];
        a2[i] = arr[i];
        a3[i] = arr[i];
    }

    int bubble = 0, insertion = 0, selection = 0;

    // Bubble Sort
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
        {
            bubble++;
            if(a1[j] > a1[j + 1])
                swap(a1[j], a1[j + 1]);
        }

    // Insertion Sort
    for(int i = 1; i < n; i++)
    {
        int key = a2[i];
        int j = i - 1;

        while(j >= 0)
        {
            insertion++;
            if(a2[j] > key)
            {
                a2[j + 1] = a2[j];
                j--;
            }
            else
                break;
        }
        a2[j + 1] = key;
    }

    // Selection Sort
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            selection++;
            if(a3[j] < a3[min])
                min = j;
        }
        swap(a3[i], a3[min]);
    }

    cout << "Bubble Sort Comparisons    : " << bubble << endl;
    cout << "Insertion Sort Comparisons : " << insertion << endl;
    cout << "Selection Sort Comparisons : " << selection << endl;

    return 0;
}