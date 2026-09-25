/* 
Question 1:
Write a C++ program to implement Linear Search on an array.
Display the position of the key if it is found; otherwise display an appropriate message.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 15, 25, 30, 35, 40};
    int key = 35;
    int position = -1;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == key)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at index " << position;
    else
        cout << "Element not found.";

    return 0;
}