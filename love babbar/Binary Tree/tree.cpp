#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
 int data;
 Node*left;
 Node*right;
 Node(int data){
    this->data=data;
    this->left=NULL;
    this->right+NULL;
 }
};
void buildTree(Node*&root){
  int d;
  cout<<"Enter data"<<endl;
  cin>>d;
  /*if(d==-1){
    return ;
  }*/

   if(d==-1){
    return ;
  }
root =new Node(d);
    cout << "Enter data for inserting in left of " << d << endl;
      buildTree(root->left); 
     cout << "Enter data for inserting in right of " << d << endl;
     buildTree(root->right);
   
}
void print(Node*&root){  //Inorder  printing  without a structered representation
    if(root==NULL){                   // of Nodes
        return ;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

void   levelOrderTraversal(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
while(!q.empty()){
    Node*temp=q.front();
    q.pop();
    if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
               if(temp->right!=NULL){
            q.push(temp->right);
        }
    }

}
}
int main(){
    Node*root=NULL;
   buildTree(root);
    levelOrderTraversal(root);
 //print(root);
}

