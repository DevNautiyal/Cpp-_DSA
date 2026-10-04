/*
Q11. Write a C++ program to reverse a Singly Linked List.
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
    Node *head=NULL,*newNode,*temp,*prev=NULL,*curr,*nextNode;
    int n,x;

    cout<<"Enter number of nodes: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        newNode=new Node;
        newNode->data=x;
        newNode->next=NULL;

        if(head==NULL)
            head=temp=newNode;
        else
        {
            temp->next=newNode;
            temp=newNode;
        }
    }

    curr=head;
    while(curr!=NULL)
    {
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }

    head=prev;

    cout<<"Reversed List: ";
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}