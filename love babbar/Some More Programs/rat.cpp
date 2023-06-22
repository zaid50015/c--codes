
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool check(vector<vector<int>> &m,vector<string>&ans,int x ,int y,int n)
    {
        if(x<n && y<n  && m[x][y]==1)
        return true;
        return false;
    }
    
    public:
   bool solve(vector<vector<int>> &m, vector <string> &ans,int x ,int y,int n)
    {
        if(x==n-1 & y==n-1 )
        return true;
        if(check(m,ans,x,y,n))
        {
            if(solve(m,ans,x+1,y,n))
            {
                ans.push_back("L");
                return true;
            }
            else if(solve(m,ans,x,y+1,n))
            {
             ans.push_back("D");
             return true;
            }
             else if(solve(m,ans,x,y-1,n))
             {
                 ans.push_back("U");
                 return true;
             }
             ans.pop_back();
             return false;
        }
        return false;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here 
        vector <string> ans;
 
         if(solve(m,ans,0,0,n))
         {
             return ans;
         }
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends