//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        // USING TABULATION BOTTOM UP APPROACH
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        for(int i=n-1;i>=0;i--) {
            for(int j=-1;j<i;j++) {
                int one = dp[i+1][j+1], two = 0;
                if(j == -1 or intervals[i][0] >= intervals[j][1])
                    two = intervals[i][2] + dp[i+1][i+1];
                dp[i][j+1] = max(one, two);
            }
        }
        return dp[0][0];
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            cin >> intervals[i][0] >> intervals[i][1] >> intervals[i][2];
        }
        Solution obj;
        cout << obj.maximum_profit(n, intervals) << endl;
    }
    return 0;
}

// } Driver Code Ends