#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> &rank,int size, int m,int mid)
{
    int dish=0;
    int cook=0;
    int i=1;
    int sum=0;
    while(dish<m )
    {
        if(sum+i*rank[cook]<=mid)
        { sum+=i*rank[cook];
            dish++;
            i++;
        }
        else
        {
            cook++;
            if(cook>=size || rank[cook]>mid)
            {
                return false;
            }
            sum=rank[cook];
            dish++;
            i=2;
        }
    }
    return true;
}

int minCookTime(vector<int> &rank, int m)
{
  sort(rank.begin(),rank.end());
    int si=0;
    int size=rank.size();

    int ans=-1;
        int ei=rank[size-1]*(m*(m+1))/2;
  
    
    int mid=si+(ei-si)/2;
    while(si<=ei)
    {
        if(ispossible(rank,size,m,mid))
        {ans=mid;
            ei=mid-1;
        }
        else
            {si=mid+1;}
        mid=si+(ei-si)/2;
    }
    return ans;
}
int main()
{
    vector<int> rank={1,1,1,1,1,1,1,1};
    int x=minCookTime(rank,8);
    cout<<x;
    return 0;
}