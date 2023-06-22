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
int maxi(Node*root){
    while (root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
    
}
int mini(Node*root){
    while (root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
    
}
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
  void levelOrder(Node*root){
    if(root==NULL)
     return;
     levelOrder(root->left);
     cout<<root->data<<" ";
     levelOrder(root->right);
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
  int inorderPredecesoor(Node*root,int data){
    int ans=-1;
    while (root!=NULL)
    {
        if(root->data>=data){
            root=root->left;
        }
        else{
            ans=root->data;
            root=root->right;
        }
    }
    return ans;
  }
  int inorderSucessor(Node*root,int data){
        int ans=-1;
    while (root!=NULL)
    {
        if(root->data<=data){
            root=root->right;
        }
        else{
            ans=root->data;
            root=root->left;
        }
    }
    return ans;
  }
   
   Node* deleteNode(Node*root,int target){
    if(root==NULL){
        return NULL;
    }
    // Node to be deleted found
   if(root->data==target){
    // leaf Node
     if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
     }
      //Right children absent
     else if(root->left!=NULL and root->right==NULL){
        Node*temp=root->left;
        delete root;
        return temp;
     }
          else if(root->left==NULL and root->right!=NULL){
        Node*temp=root->right;
        delete root;
        return temp;
     }
     else{
        root->data=mini(root->right);
        root->right=deleteNode(root->right,root->data);
        delete root->right;
        return root;
     }
     
   }
        if(target>root->data){
           root->right=deleteNode(root->right,target);
        }
        else{
            root->left=deleteNode(root->left,target);
        }
        return root;
   }
  int main(){
    Node*root=NULL;
    insertData(root);
    cout<<"printing Tree"<<endl;
    printTree(root);
    cout<<"level order"<<endl;
   levelOrder(root);
    cout<<endl;
    cout<<mini(root)<<endl;
    cout<<maxi(root)<<endl;
    int n;
    cin>>n;
    cout<<inorderSucessor(root,n)<<endl;
    cout<<endl;
    cout<<endl;
    root=deleteNode(root,10);
    printTree(root);
  }