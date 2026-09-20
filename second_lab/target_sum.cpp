// find two elements in array whose sum equals in target sum 

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    int index1 = -1, index2 = -1;

    // Check every possible pair (including same element)
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)   // j = i allows same element
        {
            if(arr[i] + arr[j] == target)
            {
                index1 = i;
                index2 = j;
                break;
            }
        }

        if(index1 != -1)
            break;
    }

    if(index1 == -1)
    {
        cout << "No pair found." << endl;
    }
    else
    {
        cout << "\nPair Found!" << endl;
        cout << "First Element  : " << arr[index1] << endl;
        cout << "Second Element : " << arr[index2] << endl;
        cout << "Indixes        : " << index1 << " and " << index2 << endl;
    }

    return 0;
}