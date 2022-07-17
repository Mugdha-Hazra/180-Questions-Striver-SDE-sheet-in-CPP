class Solution {
public:
    int kInversePairs(int n, int k) {
    int dp[1001][1001] = { 1 };
    for (int N = 1; N <= n; ++N)
        for (int K = 0; K <= k; ++K)
            for (int i = 0; i <= min(K, N - 1); ++i) 
                dp[N][K] = (dp[N][K] + dp[N - 1][K - i]) % 1000000007;
    return dp[n][k];
}
};