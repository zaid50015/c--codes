#include<bits/stdc++.h>
using namespace std;
void solve(int s){
  int ballr,home;
  cin>>ballr>>home;
  home=home+ballr;
  home=home*home;
  int n;
  cin>>n;
 vector<pair<int,int>>red;
 for(int i=0;i<n;i++){
    int x=0,y=0;
    cin>>x>>y;
    red.push_back({x*x,y*y});
 }


vector<pair<int,int>>yellow;
int m;
cin>>m;
 for(int i=0;i<m;i++){
    int x=0,y=0;
    cin>>x>>y;
    yellow.push_back({x*x,y*y});
 }

  int redans=0;
 int yellowans=0;
if(m<=n){
     for(int i=0;i<m;i++){
        int d1=red[i].first+red[i].second;
        int d2=yellow[i].first+yellow[i].second;
        if(d1<d2){
       if(d1<=home)     
           redans++;
        }
        else if(d2<d1){
            if(d2<=home)
            yellowans++;
        }
     }

     for(int j=m+1;j<n;j++){
              int d1=red[j].first+red[j].second;
              if(d1<=home)     
           redans++;

     }
}

else if(n<=m){
         for(int i=0;i<n;i++){
        int d1=red[i].first+red[i].second;
        int d2=yellow[i].first+yellow[i].second;
        if(d1<d2){
       if(d1<=home)     
           redans++;
        }
        else if(d2<d1){
            if(d2<=home)
            yellowans++;
        }
     }

     for(int j=n+1;j<m;j++){
                int d2=yellow[j].first+yellow[j].second;
              if(d2<=home)     
           yellowans++;

     }
}

    cout<<"Case #"<<s<<": "<<redans<<" "<<yellowans<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
         solve(i);
    }
}
