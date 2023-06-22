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
        this->right=NULL;
    }
};
Node* buildTree(Node*root,int n){
    if(root==NULL){
        root=new Node(n);
        return root;
    }
    if(n>root->data){
        root->right=buildTree(root->right,n);
    }
    else{
        root->left=buildTree(root->left,n);
    }
    return root;
}
  void insertData(Node*&root){
    int n;
    cin>>n;
    while(n!=-1){
        root=buildTree(root,n);
        cin>>n;
    }
  }
  void printTree(Node*root){
    queue<Node*>q;
    q.push(root);
   q.push(NULL);
   while(!q.empty()){
    Node*front=q.front();
    q.pop();
    if(front==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<front->data<<" ";
        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right);
        }
    }
   }
  }
  int main(){
    Node*root=NULL;
    insertData(root);
    printTree(root);
  }