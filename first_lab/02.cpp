/*2.	WAP to print the sum of two unequal sizes array into third array. Sample Input:- A[]={1,2,3,4,5} B[]={2,4,6,8,10,12,14}
Sample Output:- Sum[]={3,6,9,12,15,12,14}
*/

#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 4, 6, 8, 10, 12, 14};

    int sizeA = 5;
    int sizeB = 7;
    int sizeC = 7;

    int C[7];

    for (int i = 0; i < sizeC; i++) {
        if (i < sizeA)
            C[i] = A[i] + B[i];
        else
            C[i] = B[i];
    }

    cout << "Sum Array: ";
    for (int i = 0; i < sizeC; i++)
        cout << C[i] << " ";

    return 0;
}