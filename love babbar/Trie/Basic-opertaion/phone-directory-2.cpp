#include<bits/stdc++.h>
using namespace std;
class trie{
    public:
   char ch;
   trie*children[26];
   bool isterminal;
   trie(char data){
    this->ch=data;
    for(int i=0;i<26;i++){
        children[i]=NULL;
    }
    isterminal=false;
   }
};
class trienode{
 public:
 trie*root;
 trienode(){
    root=new trie('\0');
 }
 void insertUtil(trie*root,string word){
    if(word.length()==0){
        root->isterminal=true;
        return;
    }
    trie*child;
    int index=word[0]-'a';
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        child=new trie(word[0]);
        root->children[index]=child;
    }
    insertUtil(child,word.substr(1));
 }
 void insert(string&word){
    insertUtil(root,word);
 }
 void print(trie*curr,string prefix,vector<string>temp){
     if(curr->isterminal){
        temp.push_back(prefix);
     }
     for(char i='a';i<='z';i++){
        if(curr->children[i-'a']!=NULL){
            trie*next=curr->children[i-'a'];
            prefix.push_back(i);
            print(next,prefix,temp);
        }
     }

 }
 vector<vector<string>> getSuggestion(string&query){
    vector<vector<string>> result;
    trie*prev=root;
    string prefix="";
    for(int i=0;i<query.length();i++){
        prefix.push_back(query[i]);
        int index=prefix[i]-'a';
        trie*curr=prev->children[index];
        if(curr==NULL){
            break;
        }
        vector<string>temp;
        print(curr,prefix,temp);
        result.push_back(temp);
        prev=curr;
        temp.clear();
    }
    return result;
 }
};
vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
   trienode*test=new trienode();
   for(int i=0;i<contactList.size();i++){
    test->insert(contactList[i]);
   }
   return test->getSuggestion(queryStr);
}