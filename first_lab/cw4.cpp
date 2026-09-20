// Q.4. Count the number of Occurrences of a particular element X.
     //Input:arr[] ={3,5,8,3,2,1,4,3,6,3,3,5,2,1,7,2}  X: 3  Output: 5
 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element for which you want to find occurenece";
    cin>>x;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}