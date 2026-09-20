/*5.	WAP to print the union and intersection of two arrays. Sample Input:- A[]={1,2,3,4,5} B[]={2,4,6,8,10}
Sample Output:- Union=1,2,3,4,5,6,8,10 Intersection=2,4
*/

#include <iostream>
using namespace std;

int main() {
    int A[] = {1,2,3,4,5};
    int B[] = {2,4,6,8,10};

    int sizeA = 5, sizeB = 5;

    cout << "Union: ";

    for(int i=0;i<sizeA;i++)
        cout<<A[i]<<" ";

    for(int i=0;i<sizeB;i++){
        bool found=false;

        for(int j=0;j<sizeA;j++){
            if(B[i]==A[j]){
                found=true;
                break;
            }
        }

        if(!found)
            cout<<B[i]<<" ";
    }

    cout<<"\nIntersection: ";

    for(int i=0;i<sizeB;i++){
        for(int j=0;j<sizeA;j++){
            if(B[i]==A[j]){
                cout<<B[i]<<" ";
                break;
            }
        }
    }

    return 0;
}