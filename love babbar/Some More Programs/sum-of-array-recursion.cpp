#include<bits/stdc++.h>
using namespace std;
int sumArray(int *arr,int n)
{
//base case
if(n==0)
return 0;
int sum=sumArray(arr+1,n-1)+arr[0];
return sum;



}
int main()
{
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int sum=sumArray(arr,n);
    cout<<sum;
}