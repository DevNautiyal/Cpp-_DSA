// Q.2. sum of all the elements in the array.  input: arr[ ] ={1,2,3,4,5}  output: 15

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements for array:";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
