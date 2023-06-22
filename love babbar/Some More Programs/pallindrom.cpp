#include<bits/stdc++.h>
using namespace std;
bool ispallindrom(string s, int i,int j)
{
    if(i>j)
    return true;
    if(s[i]!=s[j])
    return false;
    return ispallindrom(s,i+1,j-1);
}
int reverse(int n,int rev=0)
{
    if(n==0)
    return rev;
    int d=n%10;
    rev=rev*10+d;
return reverse(n/10,rev);
}
int main()
{
    string s;
    cin>>s;
    int l=s.length()-1;
     if(ispallindrom(s,0,l))
     cout<<" is palindrome"<<endl;
     else{
         cout<<"not a pallin drome"<<endl;
     }
     int n=100;
     cout<<reverse(n);
}