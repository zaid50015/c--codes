#include<bits/stdc++.h>
using namespace std;
class Node
{   public:
    int value;
    Node*next;
 
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
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
    void insertNode(Node*&tail,int value,int element)
    { // Empty List
        if(tail==NULL)
        {
            Node*temp=new Node(value);
            temp->next=temp;
            tail=temp;
        }

        // koi already exsiting node hai uske just age value dal rahe hai
        else{
          Node*curr=tail;
          while (curr->value!=element)
          {
              curr=curr->next;
          }
          Node*temp=new Node(value);
             temp->next=curr->next;
             curr->next=temp;
        }
    }
    void deletenode(Node*&tail,int value)
    {
      
      Node*prev=tail;
      Node*curr=prev->next;
      while(curr->value!=value)
      {
         prev=curr;
         curr=curr->next;
      }
      prev->next=curr->next;
      // for deleteitng only a single node is present
      if(curr==prev)
      {
          tail=NULL;
          return;
      }
     if(tail==curr)
     tail=prev;
      curr->next=NULL;
      delete curr;
    }
    void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->value << " ";
        temp = temp->next;
    }while (tail!=temp);
    cout << endl;
}
    int main()
    {
      Node*tail=NULL;
      insertNode(tail,5,1);
      print(tail);
      cout<<endl;
      insertNode(tail,6,5);
        print(tail);
      cout<<endl;
      insertNode(tail,4,5);
      print(tail);
    //   deletenode(tail,4);
    //   cout<<endl;
    //   print(tail);
    deletenode(tail,5);
    cout<<endl;
    print(tail);
    }