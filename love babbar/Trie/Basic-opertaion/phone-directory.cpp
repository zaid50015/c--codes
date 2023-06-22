#include<bits/stdc++.h>
using namespace std;
class TrieNode{
  public:
  TrieNode* children[26];
  bool isTerminal;
  
  TrieNode(){
      for(int i=0;i<26;i++){
          children[i]=NULL;
      }
      isTerminal= false;
  }
};

class Trie{
  public:
      TrieNode *root;
  
  Trie(){
      root= new TrieNode();
  }
  
  void insert(string word){
      TrieNode* curr=root;
      for(int i=0;i<word.length();i++){
          int index=word[i]-'a';
          if(curr->children[index]==NULL)
              curr->children[index]=new TrieNode();
          curr=curr->children[index];
      }
       curr->isTerminal=true;
  }
  
  void printSuggestions(TrieNode* curr, vector<string> &temp, string prefix){
      if(curr->isTerminal){
          temp.push_back(prefix);
      }
      
      for(char ch='a'; ch<='z';ch++){
          TrieNode *next= curr->children[ch-'a'];
          
          if(next!=NULL){
              prefix.push_back(ch);
              printSuggestions(next,temp,prefix);
              prefix.pop_back();
          }
        }
  }
  
  vector<vector<string>> getSuggestions(string &str){
      TrieNode *prev=root;
      vector<vector <string> > output;
      string prefix="";
      
      for(int i=0;i<str.length();i++){
          prefix.push_back(str[i]);
          
          int index=str[i]-'a';
          TrieNode* curr = prev->children[index];
              if(curr==NULL)             // Not found
                  break;
          
          // found
          vector<string> temp;
          printSuggestions(curr,temp,prefix);
          
          output.push_back(temp);
          prev=curr;
      }
      
      return output;
  }
};

vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr){
  Trie *t = new Trie();
  for(int i=0;i<contactList.size();i++){
      t->insert(contactList[i]);
  }
  
  return t->getSuggestions(queryStr);
  
}