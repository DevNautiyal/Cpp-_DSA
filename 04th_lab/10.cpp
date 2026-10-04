/*
Q10. Write a C++ program to find the maximum and minimum element in a Linked List.
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
    int n, value, maxValue, minValue;

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
    maxValue = minValue = head->data;

    while (temp != NULL)
    {
        if (temp->data > maxValue)
            maxValue = temp->data;

        if (temp->data < minValue)
            minValue = temp->data;

        temp = temp->next;
    }

    cout << "Maximum = " << maxValue << endl;
    cout << "Minimum = " << minValue << endl;

    return 0;
}