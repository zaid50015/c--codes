#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int i,int j)
{
    if(i>j)
    return ;
    else
    {
        swap(s[i],s[j]);
        return reverse(s,i+1,j-1);
    }
}
void ss(int &a ,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    string s;
    cin>>s;
    int l=s.length()-1;
    reverse(s,0,l);
    cout<<s;
    int a=5;
    int b=10;
    ss(a,b);
    cout<<a<<" "<<b;

}