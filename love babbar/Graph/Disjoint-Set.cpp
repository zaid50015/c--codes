#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
 void make(int v){
    parent[v]=v;
 }
 int findParent(int v){
    if(parent [v]=v) return v;
    return findParent(parent[v]);
 }
 void Union(int a,int b){
    a=findParent(a);
    b=findParent(b);
    if(a!=b)
    parent[b]=a;
 }