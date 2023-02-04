//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
    vector<int> dp;
public:	
	// calculate the maximum sum with out adjacent
	int solve(int *arr, int n) {
	    if(n < 0)
	        return 0;
	    if(n == 0) 
	        return arr[0];
        if(dp[n] != -1) 
            return dp[n];
            
	    int take = solve(arr, n-2) + arr[n];
	    int notake = solve(arr, n-1) + 0;
        
	    return dp[n] = max(take, notake);
	}
	int findMaxSum(int *arr, int n) {
	   // dp.resize(n, -1);
	   // return solve(arr, n-1);
	   
	   return topDown(arr, n);
	}
	
	int topDown(int *arr, int n) {
	    dp.resize(n + 1, 0);
	    dp[0] = arr[0];
	    dp[1] = max(arr[0], arr[1]);
	    
	    for(int i=2; i<n; ++i) {
	        
	        int take = dp[i-2] + arr[i];
	        int notake = dp[i-1] + 0;
	        
	        dp[i] = max(take, notake);
	    }
	    
	    return dp[n-1];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends