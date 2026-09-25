/*Write a C++ program to implement Bubble Sort in ascending order.
Display the array before sorting and after each pass.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Before Sorting:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

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

        cout << "After Pass " << i + 1 << ": ";
        for (int k = 0; k < size; k++)
            cout << arr[k] << " ";
        cout << endl;
    }

    return 0;
}