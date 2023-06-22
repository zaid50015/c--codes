#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int*arr,int s,int n)
{// base cases
    if(arr[0]==s)
    return true;
    if(n==0)
    return false;
    return linearSearch(arr+1,s,n-1);
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int s;
    cin>>s;
    if(linearSearch(arr,s,n))
    {
        cout<<"Element exits"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}