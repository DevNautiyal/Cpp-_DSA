/*
Q9. Write a C++ program to count the total number of nodes in a Linked List.
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
    int n, value, count = 0;

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

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << "Total Nodes = " << count;

    return 0;
}