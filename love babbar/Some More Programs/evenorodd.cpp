#include<iostream>
using namespace std;
int main()
{
     cout<<"Enter a number "<<endl;
     int n;
      cin>>n;
      if(n&1)
      {
          cout<<"Number is  odd"<<endl; return 0;
      }
      cout<<"Number is even";
}