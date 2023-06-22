 #include<bits/stdc++.h>
using namespace std;
int fpivot(int *arr,int si, int ei)
{
    int pivot=arr[ei];
    int i=si-1;
    for(int j=si;j<ei;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }

    }
    i=i+1;
  swap(arr[i],arr[ei]);
  return i;
}
void findpivot(int *arr,int si,int ei)
{
    if(si<ei)
    {
        int pivot=fpivot(arr,si,ei);
        findpivot(arr,si,pivot-1);
         findpivot(arr,pivot+1,ei);
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findpivot(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}