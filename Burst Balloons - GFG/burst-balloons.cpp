//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int maxCoins(int N, vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<vector<int>>dp(n+2, vector<int>(n+1, 0));
        arr.push_back(1);
        arr.insert(arr.begin(), 1);
        
        for(int i=n; i>= 1; i--){
            for(int j=1; j<=n; j++){
                if(i > j) continue;
                int maxi = INT_MIN;
                for(int k=i;k<=j;k++){
                    int ans = arr[i-1]*arr[k]*arr[j+1] + dp[i][k-1] + dp[k+1][j];
                    if(maxi < ans) maxi = ans;
                }   
                dp[i][j] = maxi;
            }
        }
        return dp[1][n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends