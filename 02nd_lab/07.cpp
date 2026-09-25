/*
Question 7:
Write a C++ program to implement Selection Sort in ascending order.
Display the minimum element selected in each pass.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 3, 8, 4, 2};
    int size = 5;

    for (int i = 0; i < size - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        cout << "Minimum element in Pass " << i + 1 << " = " << arr[min] << endl;

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "\nSorted Array:\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}