#include<bits/stdc++.h>
using namespace std;
string binaryShopping(string S, int P)
{
    // Write your code here.
    int l=S.length()-1;
   int copy=0;
   int d=0;
   int i=0;
     while(l>=0)
    {
         d=S[l--]-'0';

        copy =(d*pow(2,i))+copy;
        i++;
    }
 
    copy=copy<<P;
    l=S.length()-1;
    while(l>=0)
    {
         d=copy&1;
        
        S[l--]=d+'0';
     
        copy=copy>>1;
    }
 
    return S;
}
int main()
{
 cout<<binaryShopping("00011",5);
}