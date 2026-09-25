/*
Question 12:
Write a menu-driven C++ program that allows the user to choose
Bubble Sort, Insertion Sort, or Selection Sort.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 3, 8, 4, 2};
    int size = 5;
    int choice;

    cout << "1. Bubble Sort\n";
    cout << "2. Insertion Sort\n";
    cout << "3. Selection Sort\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else if (choice == 2)
    {
        for (int i = 1; i < size; i++)
        {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }
    else if (choice == 3)
    {
        for (int i = 0; i < size - 1; i++)
        {
            int min = i;

            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[min])
                    min = j;
            }

            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    else
    {
        cout << "Invalid Choice.";
        return 0;
    }

    cout << "\nSorted Array:\n";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}