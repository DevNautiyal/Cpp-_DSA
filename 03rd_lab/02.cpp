/*Write a C++ program to implement Bubble Sort in descending order and 
display the final sorted array.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

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

    cout << "Sorted Array (Descending): ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}