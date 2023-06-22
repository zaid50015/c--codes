#include<bits/stdc++.h>
using namespace std; 
//More time consuming
string todeci(int n){
       int d=0;
    string ans="";
    while(n>0)
    {
       d=n&1;
       ans=ans+to_string(d);
       n=n>>1;
    }
   reverse(ans.begin(),ans.end());
   return ans;
   }
   // Less time consuming
int toDec(int n){
    int rev=0;
    int i=0;
    int d;
    while(n>0){
        d=n&1;
        rev=(d*pow(10,i))+rev;
        n=n>>1;
    }
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
 cout<<todeci(n)<<endl;
 cout<<todeci(n)<<endl;
}