/*.....linear search, display position of key if it is found,
       otherwise display appropriate message....*/ 

#include <iostream>
using namespace std;
int main(){

    int arr[6] = {10,15,25,30,35,40};
    int a = 35;
    int index = -1;
    for(int i=0; i<6; i++){
        if(arr[i]==a){
            index = i;
            break;
        }    
    }

    if(index !=-1){
        cout<<"element found at index "<<index;
    }
    else{
        cout<<"element not found";  
    }
    
    return 0;
}