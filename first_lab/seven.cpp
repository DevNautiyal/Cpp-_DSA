/*7.	WAP to determine whether one array is subset of another array. Both arrays are not sorted, different sized and elements are distinct.
Sample Input:- Arr1[] = {11, 1, 13, 21, 3, 7}, Arr2[] = {11, 3, 7, 1}
Sample Output:- Yes
*/ 

#include <iostream>
using namespace std;

int main() {

    int arr1[] = {11,1,13,21,3,7};
    int arr2[] = {11,3,7,1};

    int size1 = 6;
    int size2 = 4;

    bool subset = true;

    for(int i=0;i<size2;i++){

        bool found = false;

        for(int j=0;j<size1;j++){

            if(arr2[i]==arr1[j]){
                found=true;
                break;
            }
        }

        if(!found){
            subset=false;
            break;
        }
    }

    if(subset)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}