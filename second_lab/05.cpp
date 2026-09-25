/*
Question 5:
Write a C++ program to implement Bubble Sort in descending order.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 3, 8, 4, 2};
    int size = 5;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array in Descending Order:\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}