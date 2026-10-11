#include <iostream>
using namespace std;

int main() {
    int st[5], top = -1;
    int choice, x;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> x;

            if (top == 4)
                cout << "Stack Overflow\n";
            else
                st[++top] = x;
        }
        else if (choice == 2) {
            if (top == -1)
                cout << "Stack Underflow\n";
            else
                cout << "Popped: " << st[top--] << endl;
        }
        else if (choice == 3) {
            if (top == -1)
                cout << "Stack is empty\n";
            else {
                for (int i = top; i >= 0; i--)
                    cout << st[i] << " ";
                cout << endl;
            }
        }
        else if (choice != 4) {
            cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}