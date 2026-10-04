/*
Q14. Write a C++ program to implement a Doubly Linked List
and perform insertion and deletion operations.
*/

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev,*next;
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
        newNode->prev=NULL;
        newNode->next=NULL;

        if(head==NULL)
            head=temp=newNode;
        else
        {
            temp->next=newNode;
            newNode->prev=temp;
            temp=newNode;
        }
    }

    temp=head;

    cout<<"Doubly Linked List: ";
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}