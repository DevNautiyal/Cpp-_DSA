/*3.	WAP to print the reverse of an array.
 Sample Input:- Arr[]={1,2,3,4,5} Sample Output:- 5 4 3 2 1*/


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Reverse Array: ";

    for (int i = size - 1; i >= 0; i--)
        cout << arr[i] << " ";

    return 0;
}