/*
Q8. Write a C++ program to search for an element in a Singly Linked List.
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, value, key, pos = 1;
    bool found = false;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter data: ";
        cin >> value;

        newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "Enter element to search: ";
    cin >> key;

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            found = true;
            break;
        }
        temp = temp->next;
        pos++;
    }

    if (found)
        cout << "Element found at position " << pos;
    else
        cout << "Element not found.";

    return 0;
}