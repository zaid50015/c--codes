#include<bits/stdc++.h>
using namespace std;
class DisJoint{
    private:
    vector<int>parent;vector<int>rank;
    public:
    DisJoint(int n){
    rank.resize(n+1, 0); 
        parent.resize(n+1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}

int findParent(int node){
    if(parent[node]==node) return node;
    return parent[node]=findParent(parent[node]);
}

void UnionSet(int u,int v){
    u=findParent(u);
    v=findParent(v);
  if(u==v) return;
        if(rank[u]>rank[v]){
            parent[v]=u;
        }
        else if(rank[v]>rank[u]){
            parent[u]=v;
        }
        else {
            parent[v]=u;
            rank[u]++;
        }
 
}
    
};

bool comp(vector<int>&a,vector<int>&b){
    return a[2]<b[2];
}

int minimumSpanningTree(vector<vector<int>>& edges, int n)
{
  /*
    Don't write main().
    Don't read input, it is passed as function argument.    
    No need to print anything.
    Taking input and printing output is handled automatically.
  */
    sort(edges.begin(),edges.end(),comp);
  DisJoint obj(n);
    
    int ans=0;
    for(int i=0;i<edges.size();i++){
            int u=obj.findParent(edges[i][0]);
    int v=obj.findParent(edges[i][1]);
        int wt=edges[i][2];
        if(u!=v){
            ans+=wt;
            obj.UnionSet(u,v);
        }
    }
  return ans;
}
int main(){
 

    
        int n,m;
        cin>>n>>m;
      vector<vector<int>> edges( n , vector<int> (m,0)); 
        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
            cin>>edges[i][j];
           }
        }
        cout<<minimumSpanningTree(edges,n);
    
    
}