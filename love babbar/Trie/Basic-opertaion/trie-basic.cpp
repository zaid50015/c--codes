#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
char data;
TreeNode* children[26];
bool terminal;

TreeNode(char val){
    this->data=val;
    for(int i=0;i<26;i++){
        children[i]=NULL;
    }
    terminal=false;
}
};
class Trie{
    private:
    void insertUtil(string word,TreeNode*root){
  if(word.length()==0){
       root->terminal=true;
       return;
  }
  int index=word[0]-'a';
  TreeNode*child;
  if(root->children[index]!=NULL){
    child=root->children[index];
  }
  else{
   child=new TreeNode(word[0]);
   //Linking the mew inserted root;
    root->children[index]=child;
  }
  insertUtil(word.substr(1),child);
}
bool searchUtil(string word,TreeNode*root){
    if(word.length()==0){
        return root->terminal;
    }
    int index=word[0]-'a';
    if(root->children[index]!=NULL){
        return searchUtil(word.substr(1),root->children[index]);
    }else{
        return false;
    }
}
bool prefixUtil(string word,TreeNode*root){
    if(word.length()==0){
        return true;
    }
    int index=word[0]-'a';
    if(root->children[index]!=NULL){
        return prefixUtil(word.substr(1),root->children[index]);
    }else{
        return false;
    }
}
public:
TreeNode*root;
Trie(){
    root=new TreeNode('\0');
}
void insert(string word){
    insertUtil(word,root);
}
 bool search(string word){
    return searchUtil(word,root);
 }
};
int main(){
  Trie*test=new Trie();
  test->insert("abcd");
  cout<<test->search("abcdw");
}