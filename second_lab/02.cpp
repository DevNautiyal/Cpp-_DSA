/*
Question 2:
Write a C++ program to implement Binary Search on a sorted array.
Display the position of the key if it is found.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 15, 25, 30, 35, 40};
    int key = 35;

    int low = 0;
    int high = 5;
    int position = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            position = mid;
            break;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (position != -1)
        cout << "Element found at index " << position;
    else
        cout << "Element not found.";

    return 0;
}