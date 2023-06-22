#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node*next;
    Node*top=NULL;
   /*     ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }*/
    bool isEmpty(){
        if(top==NULL){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int d){
        Node*ptr=new Node();
        ptr->data=d;
        ptr->next=top;
        top=ptr;
    }
 void pop(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        Node*ptr=top;
        top=ptr->next;
        delete(ptr);
        
    }
 }
 int peak(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    else{
        return top->data;
    }
 }
};
int main(){
    Node*p=new Node();
    p->push(1);
    p->push(2);
    p->push(3);
    p->push(5);
    cout<<p->peak()<<endl;
    p->pop();
    cout<<p->peak()<<endl;
    p->pop();
    cout<<p->peak()<<endl;
   p->pop();
    cout<<p->peak()<<endl;
      p->pop();
    cout<<p->peak()<<endl;
 
      
}