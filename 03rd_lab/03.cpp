/* Write a C++ program to implement Insertion Sort in ascending order. 
Display the array after each insertion/pass.*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

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

        cout << "After Pass " << i << ": ";

        for (int k = 0; k < size; k++)
            cout << arr[k] << " ";

        cout << endl;
    }

    return 0;
}