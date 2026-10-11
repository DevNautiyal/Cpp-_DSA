#include <iostream>
using namespace std;

const int SIZE = 5;
int st[SIZE], top = -1;

void push(int x) {
    if (top == SIZE - 1)
        cout << "Stack Overflow\n";
    else {
        st[++top] = x;
        cout << x << " pushed\n";
    }
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        cout << st[top--] << " popped\n";
}

void peek() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top element: " << st[top] << endl;
}

void display() {
    if (top == -1)
        cout << "Stack is empty\n";
    else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << st[i] << " ";
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    peek();
    pop();
    display();

    cout << "\nTime Complexity:\n";
    cout << "Push: O(1)\n";
    cout << "Pop: O(1)\n";
    cout << "Peek: O(1)\n";
    cout << "Display: O(n)\n";

    return 0;
}