/*8.	WAP to find the first repeating element in an array. Sample Input:- Arr[] = {10, 5, 3, 4, 3, 5, 6}
Sample Output:- 5
*/


#include <iostream>
using namespace std;

int main() {

    int arr[] = {10,5,3,4,3,5,6};
    int size = 7;

    for(int i=0;i<size;i++){

        for(int j=i+1;j<size;j++){

            if(arr[i]==arr[j]){
                cout<<"First Repeating Element = "<<arr[i];
                return 0;
            }
        }
    }

    cout<<"No Repeating Element";

    return 0;
}