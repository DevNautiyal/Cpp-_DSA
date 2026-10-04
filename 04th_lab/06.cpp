/*
Q6. Write a C++ program to delete a node from the end.
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
    Node *head = NULL, *temp = NULL, *prev = NULL, *newNode = NULL;
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

    temp = head;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    delete temp;

    cout << "Linked List: ";

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}