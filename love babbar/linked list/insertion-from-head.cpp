#include<bits/stdc++.h>
using namespace std;
class nodecreated
{
    public:
    int value ;
    nodecreated*next;
    nodecreated(int data)
    {
        this->value=data;
        this->next=NULL;
    }

};
void insert(nodecreated* &head,int d)
{
nodecreated*temp=new nodecreated(d);
temp->next=head;
head=temp;
}
void print(nodecreated* &head)
{
    nodecreated*temp=head;
    while (temp!=NULL)
    {
       cout<<temp->value<<" ";
       temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    nodecreated*node1=new nodecreated(10);
    nodecreated*head=node1;
    insert(head,12);
    insert(head,14);
    print(head);
}