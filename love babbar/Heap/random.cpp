#include<bits/stdc++.h>
using namespace std;
int count (int x){
    int flag=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            flag++;
        }
    }
    return flag;
}
int MakeTheNumber(int N){
//Enter your code here
int i=1;
int flag=count(i);
while(flag!=N){
     i++;
     flag=count(i);
}
cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
  MakeTheNumber(n)<<endl;
}coutn