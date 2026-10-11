// Q11. Find Maximum and Minimum Elements in a Queue
#include <iostream>
using namespace std;

int main() {
    int q[5] = {10, 50, 20, 5, 30};
    int front = 0, rear = 4;
    int maximum = q[front], minimum = q[front];

    for (int i = front + 1; i <= rear; i++) {
        if (q[i] > maximum)
            maximum = q[i];

        if (q[i] < minimum)
            minimum = q[i];
    }

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;

    return 0;
}


// Q12. Reverse the Elements of a Queue
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> q;
    stack<int> st;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    cout << "Reversed Queue: ";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}


// Q13. Implement a Circular Queue Using an Array
#include <iostream>
using namespace std;

int main() {
    int q[5];
    int front = -1, rear = -1;
    int choice, x;

    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if ((rear + 1) % 5 == front) {
                cout << "Circular Queue Overflow\n";
            }
            else {
                cout << "Enter value: ";
                cin >> x;

                if (front == -1)
                    front = 0;

                rear = (rear + 1) % 5;
                q[rear] = x;
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
                    front = (front + 1) % 5;
            }
        }
        else if (choice == 3) {
            if (front == -1) {
                cout << "Queue is empty\n";
            }
            else {
                int i = front;

                while (true) {
                    cout << q[i] << " ";

                    if (i == rear)
                        break;

                    i = (i + 1) % 5;
                }

                cout << endl;
            }
        }
    } while (choice != 4);

    return 0;
}


// Q14. Implement a Queue Using a Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

void enqueue(int x) {
    Node* newNode = new Node{x, nullptr};

    if (rear == nullptr) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == nullptr) {
        cout << "Queue Underflow\n";
        return;
    }

    Node* temp = front;
    cout << "Deleted: " << temp->data << endl;

    front = front->next;

    if (front == nullptr)
        rear = nullptr;

    delete temp;
}

void display() {
    Node* temp = front;

    cout << "Queue: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    dequeue();
    display();

    while (front != nullptr)
        dequeue();

    return 0;
}


// Q15. Compare Linear Queue and Circular Queue
#include <iostream>
using namespace std;

int main() {
    int linear[3] = {10, 20, 30};
    int front = 0, rear = 2;

    cout << "Linear Queue:\n";

    front++;
    front++;

    cout << "Deleted two elements.\n";

    if (rear == 2)
        cout << "Cannot insert: Rear has reached the end.\n";

    cout << "Two array positions are unused.\n";

    int circular[3];
    int cf = -1, cr = -1;

    cout << "\nCircular Queue:\n";

    // Insert three elements
    for (int x = 10; x <= 30; x += 10) {
        if (cf == -1)
            cf = 0;

        cr = (cr + 1) % 3;
        circular[cr] = x;
    }

    // Delete two elements
    cf = (cf + 1) % 3;
    cf = (cf + 1) % 3;

    // Insert new elements using freed positions
    for (int x = 40; x <= 50; x += 10) {
        if ((cr + 1) % 3 == cf) {
            cout << "Queue is full\n";
            break;
        }

        cr = (cr + 1) % 3;
        circular[cr] = x;
        cout << "Inserted: " << x << endl;
    }

    cout << "\nComparison:\n";
    cout << "Linear Queue: May waste array space.\n";
    cout << "Circular Queue: Reuses freed positions.\n";
    cout << "Both support Enqueue and Dequeue in O(1).\n";

    return 0;
}