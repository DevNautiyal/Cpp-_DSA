/*4.	WAP to print kth smallest and kth largest element of an array. Sample Input:- Arr[]={1,2,3,4,5} k=2
Sample Output:- 2nd Smallest=2 2nd Largest=4
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int k = 2;

    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << k << "nd Smallest = " << arr[k - 1] << endl;
    cout << k << "nd Largest = " << arr[size - k];

    return 0;
}
