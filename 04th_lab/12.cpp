/*
Q12. Write a C++ program to sort the elements of a Linked List in ascending order.
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
    Node *head=NULL,*newNode,*temp,*p,*q;
    int n,x,t;

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

    for(p=head;p!=NULL;p=p->next)
    {
        for(q=p->next;q!=NULL;q=q->next)
        {
            if(p->data>q->data)
            {
                t=p->data;
                p->data=q->data;
                q->data=t;
            }
        }
    }

    cout<<"Sorted List: ";
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}