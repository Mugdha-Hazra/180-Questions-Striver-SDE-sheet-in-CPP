//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
 
public:
 
int mod=1e9+7;
int solve(int arr[],int n,int sum,int index,vector<vector<int>> &dp ){
    if(sum<0)
     return 0;
    
    if(index>=n ){
        if(sum==0)
         return 1;
         
         return 0;
    }
    
    if(dp[index][sum]!=-1){
        return dp[index][sum];
    }
    
    int ans=0;
  
 
    ans=(solve(arr,n,sum-arr[index],index+1,dp)%mod+solve(arr,n,sum,index+1,dp)%mod)%mod;
   
   return dp[index][sum]=ans;
   
}
 
int perfectSum(int arr[], int n, int sum)
{ 
   vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return solve(arr,n,sum,0,dp);
}
  
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends