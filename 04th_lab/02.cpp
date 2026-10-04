/*
Q2. Write a C++ program to insert a node at the beginning of a Linked List.
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
    int n, value;

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

    newNode = new Node;
    cout << "Enter value to insert at beginning: ";
    cin >> newNode->data;

    newNode->next = head;
    head = newNode;

    cout << "Linked List: ";

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}