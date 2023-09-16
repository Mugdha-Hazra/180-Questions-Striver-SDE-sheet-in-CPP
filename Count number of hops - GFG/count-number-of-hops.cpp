//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
    long long solve(int i,int n,vector<long long>&dp){
        
        if(i>n) return 0;
        if(i==n) return 1;
        if(dp[i]!=-1) return dp[i];
        long long  one_step=solve(i+1,n,dp);
        long long  two_step=solve(i+2,n,dp);
        long long  three_step=solve(i+3,n,dp);
        
        return dp[i]=(one_step+two_step+three_step)%1000000007;
    }
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
       
       if(n==1) return 1;
       vector<long long>dp(n+1,-1);
    
        return solve(0,n,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends