// Q1. Queue using an array: Enqueue, Dequeue, Peek and Display
#include <iostream>
using namespace std;

int main() {
    int q[5], front = -1, rear = -1, choice, x;

    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n";
        cin >> choice;

        if (choice == 1) {
            if (rear == 4)
                cout << "Queue Overflow\n";
            else {
                cout << "Enter value: ";
                cin >> x;
                if (front == -1) front = 0;
                q[++rear] = x;
            }
        }
        else if (choice == 2) {
            if (front == -1)
                cout << "Queue Underflow\n";
            else {
                cout << "Deleted: " << q[front] << endl;
                if (front == rear)
                    front = rear = -1;
                else
                    front++;
            }
        }
        else if (choice == 3) {
            if (front == -1) cout << "Queue is empty\n";
            else cout << "Front: " << q[front] << endl;
        }
        else if (choice == 4) {
            if (front == -1) cout << "Queue is empty\n";
            else {
                for (int i = front; i <= rear; i++)
                    cout << q[i] << " ";
                cout << endl;
            }
        }
    } while (choice != 5);

    return 0;
}


// Q2. Enqueue: insertion at the Rear
#include <iostream>
using namespace std;

int main() {
    int q[5], front = -1, rear = -1, x;

    for (int i = 0; i < 3; i++) {
        cout << "Enter value: ";
        cin >> x;

        if (rear == 4)
            cout << "Queue Overflow\n";
        else {
            if (front == -1) front = 0;
            q[++rear] = x;
            cout << "Inserted at Rear\n";
        }
    }

    cout << "Queue: ";
    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";

    return 0;
}


// Q3. Dequeue: deletion from the Front
#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 20, 30};
    int front = 0, rear = 2;

    if (front == -1 || front > rear) {
        cout << "Queue Underflow";
    }
    else {
        cout << "Deleted element: " << q[front] << endl;

        if (front == rear)
            front = rear = -1;
        else
            front++;
    }

    return 0;
}


// Q4. Peek: display the Front element without deleting it
#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 20, 30};
    int front = 0, rear = 2;

    if (front == -1)
        cout << "Queue is empty";
    else
        cout << "Front element: " << q[front];

    return 0;
}


// Q5. Display Queue elements from Front to Rear
#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 20, 30};
    int front = 0, rear = 2;

    if (front == -1) {
        cout << "Queue is empty";
    }
    else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
    }

    return 0;
}