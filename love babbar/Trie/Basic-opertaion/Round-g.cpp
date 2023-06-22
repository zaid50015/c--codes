#include<bits/stdc++.h>
using namespace std;
void solve(int x){
    int id,col,row;
    cin>>row>>col>>id;
    int arr[row][col];
    id=id-1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    long long ans=0;
    for(int i=0;i<col;i++){
        int maxi=-1;
        for(int j=0;j<row;j++){
             if(arr[j][i]>maxi){
                maxi=arr[j][i];
             }
        }
        if(maxi!=arr[id][i]){
            int a=maxi-arr[id][i];
            ans=ans+a;
        }
    }
    cout<<"Case #"<<x<<": "<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
         solve(i);
    }
}
