//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int uniquePaths(int n, int m, vector<vector<int>> &grid)
    {
        int mod=1e9+7;
        vector<vector<int>>dp(n,vector<int>(m,0));
        if(grid[0][0]==0 || grid[n-1][m-1]==0) return 0;
        dp[0][0]=1;
        for(int j=1;j<m;j++)
        {
            if(grid[0][j]==1)
            {
                dp[0][j]=dp[0][j-1];
                
            }
            
        }
        for(int i=1;i<n;i++)
        {
            if(grid[i][0]==1)
            {
                dp[i][0]=dp[i-1][0];
            }
           
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(grid[i][j])
                {
                    dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
                }
                
            }
        }
       
        return dp[n-1][m-1];
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends