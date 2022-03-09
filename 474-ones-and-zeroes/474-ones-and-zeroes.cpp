class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));
        int ones, zeros;
        for (auto str : strs) {
            ones = count(str.begin(), str.end(), '1');
            zeros = count(str.begin(), str.end(), '0');
            for (int i = n; i >= ones; i--) {
                for (int j = m; j >= zeros; j--) {
                    
                    // In each cell, we check the max between using the current string or not.
                    // dp[i][j] is the previous value in the cell - not using the current str.
                    // dp[i - ones][j - zeros] is the value if we want to use the current string.
                    // we add one because we are using another string.
                    
                    dp[i][j] = max(dp[i][j], dp[i - ones][j - zeros] + 1);
                }
            }
        }
        return dp[n][m];
    }
};