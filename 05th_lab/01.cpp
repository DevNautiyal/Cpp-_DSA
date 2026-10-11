#include <iostream>
using namespace std;

int st[5], top = -1;

void push(int x) {
    if (top == 4)
        cout << "Stack Overflow\n";
    else
        st[++top] = x;
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        cout << "Popped: " << st[top--] << endl;
}

void peek() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top: " << st[top] << endl;
}

void display() {
    if (top == -1)
        cout << "Stack is empty\n";
    else {
        for (int i = top; i >= 0; i--)
            cout << st[i] << " ";
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();

    return 0;
}