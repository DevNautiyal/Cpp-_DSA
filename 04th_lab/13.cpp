/*
Q13. Write a menu-driven C++ program implementing insertion,
deletion, searching and display operations.
*/

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head=NULL;

void display()
{
    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    int ch,x,key;
    Node *newNode,*temp;

    do
    {
        cout<<"\n1.Insert\n2.Delete First\n3.Search\n4.Display\n5.Exit\n";
        cin>>ch;

        switch(ch)
        {
        case 1:
            cin>>x;
            newNode=new Node;
            newNode->data=x;
            newNode->next=head;
            head=newNode;
            break;

        case 2:
            if(head)
            {
                temp=head;
                head=head->next;
                delete temp;
            }
            break;

        case 3:
            cin>>key;
            temp=head;
            while(temp && temp->data!=key)
                temp=temp->next;

            if(temp)
                cout<<"Found\n";
            else
                cout<<"Not Found\n";
            break;

        case 4:
            display();
            break;
        }

    }while(ch!=5);
}