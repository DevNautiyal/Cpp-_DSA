// Q11. Delete a node having two children using inorder successor
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int x) {
    if (!root) return new Node(x);
    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);
    return root;
}

Node* minimum(Node* root) {
    while (root->left)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = minimum(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int a[] = {50, 30, 70, 20, 40, 60, 80};

    for (int x : a)
        root = insert(root, x);

    root = deleteNode(root, 50);

    cout << "After deletion: ";
    inorder(root);

    return 0;
}


// Q12. Calculate the height of a Binary Tree
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

int height(Node* root) {
    if (!root) return 0;

    return 1 + max(height(root->left), height(root->right));
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Height: " << height(root);

    return 0;
}


// Q13. Count the total number of nodes in a Binary Tree
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

int countNodes(Node* root) {
    if (!root) return 0;

    return 1 + countNodes(root->left)
             + countNodes(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Total nodes: " << countNodes(root);

    return 0;
}


// Q14. Count the number of leaf nodes in a Binary Tree
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

int countLeaves(Node* root) {
    if (!root) return 0;

    if (!root->left && !root->right)
        return 1;

    return countLeaves(root->left)
         + countLeaves(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Leaf nodes: " << countLeaves(root);

    return 0;
}


// Q15. Menu-driven Binary Search Tree
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int x) {
    if (!root) return new Node(x);

    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);

    return root;
}

bool search(Node* root, int key) {
    if (!root) return false;
    if (root->data == key) return true;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

Node* minimum(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = minimum(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int height(Node* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

int countNodes(Node* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    Node* root = nullptr;
    int choice, x;

    do {
        cout << "\n\n1.Insert\n2.Search\n3.Inorder";
        cout << "\n4.Preorder\n5.Postorder\n6.Delete";
        cout << "\n7.Height\n8.Count Nodes\n9.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            root = insert(root, x);
            break;

        case 2:
            cout << "Enter key: ";
            cin >> x;
            cout << (search(root, x) ? "Found" : "Not found");
            break;

        case 3:
            inorder(root);
            break;

        case 4:
            preorder(root);
            break;

        case 5:
            postorder(root);
            break;

        case 6:
            cout << "Enter value to delete: ";
            cin >> x;
            root = deleteNode(root, x);
            break;

        case 7:
            cout << "Height: " << height(root);
            break;

        case 8:
            cout << "Total nodes: " << countNodes(root);
            break;

        case 9:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice";
        }

    } while (choice != 9);

    return 0;
}