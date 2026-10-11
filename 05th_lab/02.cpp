#include <iostream>
using namespace std;

int main() {
    int st[3], top = -1;

    for (int x = 10; x <= 40; x += 10) {
        if (top == 2)
            cout << "Stack Overflow\n";
        else {
            st[++top] = x;
            cout << "Pushed: " << x << endl;
        }
    }

    return 0;
}