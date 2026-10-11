#include <iostream>
using namespace std;

int main() {
    int st[5], top = -1;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (top < 4)
            st[++top] = x;
        else
            cout << "Stack Overflow\n";
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
        cout << st[i] << " ";

    return 0;
}