// Q6. Demonstrate Queue Overflow using an array
#include <iostream>
using namespace std;

int main() {
    int q[3], front = -1, rear = -1;

    for (int i = 10; i <= 40; i += 10) {
        if (rear == 2) {
            cout << "Queue Overflow\n";
        }
        else {
            if (front == -1) front = 0;
            q[++rear] = i;
            cout << "Inserted: " << i << endl;
        }
    }

    return 0;
}


// Q7. Demonstrate Queue Underflow
#include <iostream>
using namespace std;

int main() {
    int q[5], front = -1, rear = -1;

    if (front == -1)
        cout << "Queue Underflow: Queue is empty";
    else
        cout << "Deleted: " << q[front];

    return 0;
}


// Q8. Menu-driven Queue: Enqueue, Dequeue, Peek and Display
#include <iostream>
using namespace std;

int main() {
    int q[5], front = -1, rear = -1;
    int choice, x;

    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (rear == 4) {
                cout << "Queue Overflow\n";
            }
            else {
                cout << "Enter value: ";
                cin >> x;
                if (front == -1) front = 0;
                q[++rear] = x;
            }
        }
        else if (choice == 2) {
            if (front == -1) {
                cout << "Queue Underflow\n";
            }
            else {
                cout << "Deleted: " << q[front] << endl;
                if (front == rear)
                    front = rear = -1;
                else
                    front++;
            }
        }
        else if (choice == 3) {
            if (front == -1)
                cout << "Queue is empty\n";
            else
                cout << "Front: " << q[front] << endl;
        }
        else if (choice == 4) {
            if (front == -1)
                cout << "Queue is empty\n";
            else {
                for (int i = front; i <= rear; i++)
                    cout << q[i] << " ";
                cout << endl;
            }
        }
    } while (choice != 5);

    return 0;
}


// Q9. Count the elements currently present in a Queue
#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 20, 30};
    int front = 0, rear = 2;
    int count = 0;

    if (front != -1) {
        for (int i = front; i <= rear; i++)
            count++;
    }

    cout << "Number of elements: " << count;

    return 0;
}


// Q10. Search for an element in a Queue
#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 20, 30, 40, 50};
    int front = 0, rear = 4;
    int key = 30, found = 0;

    for (int i = front; i <= rear; i++) {
        if (q[i] == key) {
            cout << "Element found at position " << i - front + 1;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Element not found";

    return 0;
}