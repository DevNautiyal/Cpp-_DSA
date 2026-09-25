/*Write a C++ program to implement Selection Sort in ascending order.
 Display the minimum element selected in each pass.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        cout << "Pass " << i + 1 << " Minimum Element = " << arr[min] << endl;

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "\nSorted Array: ";

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}