#include<bits/stdc++.h>
using namespace std;
// 0 Base indexing se le rahe hai ase he
 void heapify(int arr[],int i,int size){
    int largest=i;
    int leftChild=2*i+1;
    int rightChild=2*i+2;
    if(leftChild<size and arr[largest]<arr[leftChild]){
        i=leftChild;
    }
    if(rightChild<size and arr[largest]<arr[rightChild]){
        i=rightChild;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,largest,size);
    }
 }

  void deleteion(int arr[],int &size){
    arr[0]=arr[size-1];
    size--;
    heapify(arr,0,size);
    
 }
  void print(int size,int arr[]){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
 }
 void heapsort(int arr[],int N)
 {
      for (int i = N - 1; i >= 0; i--) {
 
        swap(arr[0], arr[i]);
 
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    
 }
 }
 int main(){
    int arr[]={54,53,55,52,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = n/2-1; i >=0; i--)
    {
        heapify(arr,i,n);
    }
    print(n,arr);
 }