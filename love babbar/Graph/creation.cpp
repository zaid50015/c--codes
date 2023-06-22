#include<bits/stdc++.h>
using namespace std;
class Graph{
    
 unordered_map<int,list<int>> umap;
 public:
   void creation(int u,int v,bool c){
    umap[u].push_back(v);
    if(c==true){
        umap[v].push_back(u);
    }
   }

   void print(){
    for(auto &i:umap){
        cout<<i.first<<"->";
        for(auto&j:i.second){
            cout<<j<<",";
        }
        cout<<endl;
    }
   }
};
int main(){
  Graph g;
  cout<<"Enter the number of nodes"<<endl;
  int n;
  cin>>n;
  int m;
  cout<<"Enter the number of edges"<<endl;
  cin>>m;
  for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
     g.creation(u,v,1);
  }
  g.print();

vector<int>ans[32];
ans[6].push_back(30);
 cout<<ans[6][0]<<endl;


}