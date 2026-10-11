#include <iostream>
using namespace std;

int main() {
    int st[5], top = -1;

    if (top == -1)
        cout << "Stack Underflow\n";
    else
        cout << st[top--];

    return 0;
}