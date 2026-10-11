#include <iostream>
using namespace std;

int arr[10];
int top1 = -1, top2 = 10;

void push1(int x) {
    if (top1 + 1 == top2)
        cout << "Overflow\n";
    else
        arr[++top1] = x;
}

void push2(int x) {
    if (top1 + 1 == top2)
        cout << "Overflow\n";
    else
        arr[--top2] = x;
}

int main() {
    push1(10);
    push1(20);

    push2(90);
    push2(80);

    cout << "Stack 1: ";
    for (int i = top1; i >= 0; i--)
        cout << arr[i] << " ";

    cout << "\nStack 2: ";
    for (int i = top2; i < 10; i++)
        cout << arr[i] << " ";

    return 0;
}