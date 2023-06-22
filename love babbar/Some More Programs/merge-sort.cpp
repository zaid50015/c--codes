#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int* ar1=new int[l1];
    int *ar2=new int[l2];
    int si=s;
    for(int i=0;i<l1;i++)
    ar1[i]=arr[si++];
    for(int i=0;i<l2;i++)
    ar2[i]=arr[si++];
    int index1=0;
    int index2=0;
    si=s;
    while(index1<l1 && index2<l2)
    {
        if(ar1[index1]<ar2[index2])
        arr[si++]=ar1[index1++];
        else
        {
            arr[si++]=ar2[index2++];
        }
    }
    while (index1<l1)
    {
        arr[si++]=ar1[index1++];
    }
    while (index2<l2)
    {
         arr[si++]=ar2[index2++];
    }
    delete []ar1;
    delete []ar2;
    
}
void mergesort(int *arr,int s,int e)
{
 if(s>=e)
 return ;
 int mid =s+(e-s)/2;
 mergesort(arr,0,mid);
 mergesort(arr,mid+1,e);
 merge(arr,s,e);
}
int main()
{
    cout<<"Enter the length of array"<<endl;
    int n;
    cin>>n;
    int *arr=new int[n];
    cout <<"Enter "<<n<<"Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
 
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}