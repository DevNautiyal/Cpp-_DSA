/*
Question 3:
Write a C++ program to compare Linear Search and Binary Search
for a given array and display their results.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 15, 25, 30, 35, 40};
    int key = 35;

    // Linear Search
    int linearPos = -1;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == key)
        {
            linearPos = i;
            break;
        }
    }

    // Binary Search
    int low = 0;
    int high = 5;
    int binaryPos = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            binaryPos = mid;
            break;
        }
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "Linear Search Result:\n";
    if (linearPos != -1)
        cout << "Element found at index " << linearPos << endl;
    else
        cout << "Element not found.\n";

    cout << "\nBinary Search Result:\n";
    if (binaryPos != -1)
        cout << "Element found at index " << binaryPos << endl;
    else
        cout << "Element not found.\n";

    return 0;
}