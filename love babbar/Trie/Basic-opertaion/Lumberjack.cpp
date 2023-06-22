#include<bits/stdc++.h>
using namespace std;
bool isPossible(long long n,long long m,long long mid,vector<long long>&arr){
    long long ans=0;
    long long cal=0;
    for(int i=0;i<n;i++){
        cal=arr[i]-mid;
        if(cal<0){
             cal=0;
        }
        ans+=cal;
    }
    if(ans>=m){
        return true;
    }
    return false;
}
long long solve(long n,long m,vector<long long>&arr){
    long long si=0;
    sort(arr.begin(),arr.end());
    long long ei=arr[n-1];
    // for(int i=0;i<n;i++){
    //     ei+=arr[i];
    // }
    int ans=-1;
    while(si<=ei){
        long long  mid=si+(ei-si)/2;
        if(isPossible(n,m,mid,arr)){
            ans=mid;
            si=mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    return ans;
 }
int main(){
    long long  n,m;
    cin>>n>>m;
    
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(n,m,arr)<<endl;
}