
// Q.1. cal the maximum value and minimum value out of all the elements in the array.  input: arr[]=(1,5,8,4,9,7,6,2,3)  output: 9 and 1

#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 5, 8, 4, 9, 7, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
    return 0;
}