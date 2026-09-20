// 1.	WAP to print sum of odd and sum of even elements in an array. Sample Input:- Arr[]={1,2,3,4,5}
//Sample Output:- SumEven=6 SumOdd=9

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    cout << "SumEven = " << evenSum << endl;
    cout << "SumOdd = " << oddSum << endl;

    return 0;
}
