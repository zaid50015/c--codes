#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
 void make(int v,int rank[]){
    parent[v]=v;
    rank[v]=0;
 }
 int findParent(int v){
    if(parent [v]=v) return v;
    return parent[v]=findParent(parent[v]);
 }
 void Union(int a,int b,int rank[]){
    a=findParent(a);
    b=findParent(b);
    if(a!=b){
        if(rank[a]<rank[b]){
            parent[a]=b;
        }
        else if(rank[a]>rank[b]){
            parent[b]=a;
        }
        else{
            parent[a]=b;
            rank[b]++;
        }
    }
 }