//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int n, int a[]){
        int sum = 0; 
        for(int i = 0; i < n; i++)
            sum += a[i];
        if(sum % 2 != 0)
            return 0;
        
        int dp[sum/2 + 1]; memset(dp, 0, sizeof(dp));
        dp[0] = 1;
            
        for(int i = n - 1; i >= 0; i--){
            for(int target = sum/2; target >= 0; target--){
                if(target >= a[i])
                    dp[target] |= dp[target - a[i]];
            }
        }
        return dp[sum/2];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends