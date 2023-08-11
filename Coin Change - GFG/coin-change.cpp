//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int solve(int i, int j, int coins[], vector<vector<long long int>> &dp ){
       if(i<0){
           if(j==0) return 1;
           return 0;
       }
       
       if(dp[i][j]!=-1) return dp[i][j];
       
       long long int take = 0;
       long long int nottake=0;
       
       if(coins[i]<=j){
           take=solve(i,j-coins[i],coins,dp) ;
       }
       
        nottake=solve(i-1,j,coins,dp);
        
        return dp[i][j]=take+nottake;
   }
  
  
    long long int count(int coins[], int N, int sum) {

        // code here.
        vector<vector<long long int>> dp(N+1,vector<long long int>(sum+1,-1));
        
        return solve(N-1,sum,coins,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends