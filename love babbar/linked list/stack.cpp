#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;
    Stack(int size)
    {
        this->size=size;
         top=-1;
        arr=new int[size];
    }
    void push(int element){
        if(top!=size-1){
            top++;
            arr[top]=element;
        }else{
            cout<<"Stack over-flow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Under-flow"<<endl;
        }
    }
        int peak(){
            if(top!=-1){
              return arr[top];
            }
            else{
                cout<<"Stack Under-Flow"<<endl;
            }
        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }
            return false;
        }

};
int main()
{
    Stack s(5);
    s.push(45);
    s.push(46);
    s.push(47);
    s.push(48);
    s.push(49);
    s.push(50);
    s.pop();
   /* cout<<s.peak()<<endl;
      s.pop();
    cout<<s.peak()<<endl;
      s.pop();
    cout<<s.peak()<<endl;
      s.pop();
    cout<<s.peak()<<endl;
     s.pop();
     if(s.isEmpty()){
             cout<<"Stack is empty"<<endl;
     }
     s.pop();*/
    
    
}