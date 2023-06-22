#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
int d;
Node*next;
Node(int d)
{
    this->d=d;
    this->next=NULL;
}
};
void insert(Node* &tail,int d)
{
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;

}
void print(Node* &head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->d<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node*node1=new Node(10);
    Node*tail=node1;
    insert(tail,20);
    insert(tail,30);
 Node*head=node1;
 print(head);
}