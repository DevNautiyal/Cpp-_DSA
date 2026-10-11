// Q6. Create a BST by inserting n elements
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int x) {
    if (root == nullptr) return new Node(x);

    if (x < root->data)
        root->left = insert(root->left, x);
    else if (x > root->data)
        root->right = insert(root->right, x);

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
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        root = insert(root, x);
    }

    cout << "BST Inorder: ";
    inorder(root);

    return 0;
}


// Q7. Search for a key in a BST
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

bool search(Node* root, int key) {
    if (!root) return false;
    if (root->data == key) return true;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    if (search(root, key))
        cout << "Key found";
    else
        cout << "Key not found";

    return 0;
}


// Q8. Insert into a BST and display inorder traversal
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

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int a[] = {50, 30, 70, 20, 40};

    for (int x : a)
        root = insert(root, x);

    root = insert(root, 35);

    cout << "Inorder after insertion: ";
    inorder(root);

    return 0;
}


// Q9. Delete a leaf node from a BST
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

Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left && !root->right) {
            delete root;
            return nullptr;
        }
        cout << "Node is not a leaf\n";
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
    int a[] = {50, 30, 70, 20, 40};

    for (int x : a)
        root = insert(root, x);

    root = deleteNode(root, 20);

    cout << "BST after deletion: ";
    inorder(root);

    return 0;
}


// Q10. Delete a node having one child from a BST
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

Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left || !root->right) {
            Node* child = root->left ? root->left : root->right;
            delete root;
            return child;
        }
        cout << "Node has two children\n";
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
    int a[] = {50, 30, 70, 20, 40};

    for (int x : a)
        root = insert(root, x);

    // Node 30 has two children, so delete node 20 instead
    root = deleteNode(root, 30);
    cout << "BST: ";
    inorder(root);

    return 0;
}