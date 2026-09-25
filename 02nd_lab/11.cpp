/*
Question 11:
Write a menu-driven C++ program that allows the user to choose
Linear Search or Binary Search for a given array.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 15, 25, 30, 35, 40};
    int key, choice;

    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter element to search: ";
    cin >> key;

    if (choice == 1)
    {
        int pos = -1;

        for (int i = 0; i < 6; i++)
        {
            if (arr[i] == key)
            {
                pos = i;
                break;
            }
        }

        if (pos != -1)
            cout << "Element found at index " << pos;
        else
            cout << "Element not found.";
    }
    else if (choice == 2)
    {
        int low = 0, high = 5, pos = -1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (arr[mid] == key)
            {
                pos = mid;
                break;
            }
            else if (key < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        if (pos != -1)
            cout << "Element found at index " << pos;
        else
            cout << "Element not found.";
    }
    else
    {
        cout << "Invalid Choice.";
    }

    return 0;
}