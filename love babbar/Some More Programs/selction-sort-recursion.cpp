#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int i,int n)
{
    if(i>n-1)
    return ;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
    
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }
    selectionsort(arr,i+1,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,0,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}