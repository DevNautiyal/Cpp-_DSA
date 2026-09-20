/*..binary search, display position of key if it found....*/ 

// for even no. of elements the floor vlaue will be taken in indexing 

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 15, 25, 30, 35, 40};
    int a = 35;

    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == a)
        {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (arr[mid] < a)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}