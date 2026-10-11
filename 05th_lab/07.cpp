#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "HELLO";
    char st[100];
    int top = -1;

    for (char c : s)
        st[++top] = c;

    cout << "Reversed string: ";
    while (top >= 0)
        cout << st[top--];

    return 0;
}