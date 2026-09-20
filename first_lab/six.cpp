/*6.	WAP to find duplicate elements in an array. Sample Input:- Arr[]={1,4,3,4,5,1}
Sample Output:- 1 4
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,4,3,4,5,1};
    int size = 6;

    cout << "Duplicate Elements: ";

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }

    return 0;
}