#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};
 void insertionatHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}
void insertionatTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPos(Node*&head,Node*&tail,int pos,int value)
{
     if(pos==1)
     {
         insertionatHead(head,tail,value);
         return;
     }
     int cnt=1;
     Node*temp=head;
     while(cnt<pos-1)
     {
       temp=temp->next;
       cnt++;
     }
     if(temp->next==NULL)
     {
         insertionatTail(head,tail,value);
         return;
     }
     Node*nodeToInsert=new Node(value);
     nodeToInsert->next=temp->next;
     temp->next->prev=nodeToInsert;
     temp->next=nodeToInsert;
     nodeToInsert->prev=temp;
}

// Deleting a doubly linked list()
void deletenode(Node*&head,Node*&tail,int value)
{
       Node*currnode=head;
    if(currnode->data==value)
    {
        currnode->next->prev=NULL;
       head=currnode->next;
       currnode->next=NULL;
       delete currnode;
        return;
    }
    Node*prevnode=NULL;
    while(currnode->data!=value)
    {
        prevnode=currnode;
        currnode=currnode->next;
    }
    if(currnode->next==NULL)
    {
        tail=prevnode;
        currnode->prev=NULL;
     prevnode->next=currnode->next;
        currnode->next=NULL;
        return;
    }
     currnode->prev=NULL;
     prevnode->next=currnode->next;
      currnode->next->prev=prevnode;
     currnode->next=NULL;

    delete currnode;
}

void print(Node*&head,Node*&tail)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Value at head is="<<head->data<<endl;
    cout<<"value at tail is="<<tail->data<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertionatHead(head,tail,5);
    insertionatTail(head,tail,6);
    insertionatHead(head,tail,0);
    print(head,tail);
    cout<<endl;
    insertAtPos(head,tail,2,8);
    insertAtPos(head,tail,5,10);
    print(head,tail);
    cout<<endl;
    deletenode(head,tail,0);
    print(head,tail);
    cout<<endl;
    //  deletenode(head,tail,5);
    //  print(head,tail);
     deletenode(head,tail,10);
     print(head,tail);
 cout<<endl;
 deletenode(head,tail,5);
   print(head,tail);
}