#include<bits/stdc++.h>
using namespace std;
void digi(int n,string arr[])
{
    if(n==0)
    return;
    int d=n%10;
    digi(n/10,arr);
    cout<<arr[d]<<" ";
}
int main()
{
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
     digi(n,arr);
}