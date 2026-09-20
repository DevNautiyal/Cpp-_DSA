// Q.3. SEARCH the given element X in the array. if present then return the index else return -1.
     //Input: arr[] = {1,5,6,7,9,2,4,8}  X : 6  Output:2

#include <iostream>
using namespace std;
int main(){  
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element to find:";
    cin>>x;
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            index = i;
            break;
        }
    }
    if(index == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Element found at index " << index << endl;
    }
    
    return 0;
}