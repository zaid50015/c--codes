#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>nums,vector<int> output,vector<vector<int>>&ans,int index)
    {
        //base case
        if(index>=nums.size())
        {
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,output,ans,index+1);
        // include
        int element=nums[index];
        output.push_back(element);
         solve(nums,output,ans,index+1);
    }
      vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>>ans;
        solve(nums,output,ans,0);
        return ans;
    }
    int main()
    {
        int n;
        cin>>n;
        vector<int> nums;
       
      for (int i = 0; i < n; i++)
      {
          cin>>nums[i];
      }
      cout<<"hellp";
       vector<vector<int>>ans;
       ans=subsets(nums);
       cout<<ans[1][2];
  
  cout<<"[";
  for (int i = 0; i < ans.size(); i++)
  {  cout<<"[";
     for (int j = 0; j <l1; i++)
     {
         cout<<ans[i][j]<<",";
     }
       cout<<"]";
     cout<<" ";
  }
  cout<<"]";
      
 
    }