#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
     return gcd(b,a%b);
}

void printM_SpecialGCD(int N, int M)
{
//Enter your code here
 int c=0;
for(int i=2;i<N;i++)
{
    if(N%i==0)
    {
         c=i;
        break;
    }
}

int g=N/c+1;

int count =0;
for(int i=g;i<=(g*10);i++)
{ 
    int x=i*c;
    
    if(gcd(x,N)==c)
    {
        cout<<x<<" ";
        count ++;
    }
    if(count==M)
    return;
}
}
int main()
{
 printM_SpecialGCD(9,3);
}