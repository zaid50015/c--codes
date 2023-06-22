#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={1,-2,2};
    sort(arr.begin(),arr.end(),greater<int>());
    for(auto &it :arr)
    {
        cout<<it;
    }
}