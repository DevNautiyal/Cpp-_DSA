/*
Q15. Write a C++ program to implement a Circular Linked List
and perform traversal and insertion operations.
*/

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head=NULL,*temp,*newNode;
    int n,x;

    cout<<"Enter number of nodes: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;

        newNode=new Node;
        newNode->data=x;

        if(head==NULL)
        {
            head=temp=newNode;
            newNode->next=head;
        }
        else
        {
            newNode->next=head;
            temp->next=newNode;
            temp=newNode;
        }
    }

    cout<<"Circular Linked List: ";

    temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
}