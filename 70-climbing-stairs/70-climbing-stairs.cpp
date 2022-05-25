class Solution {
public:
    int dp[46];
    int climbStairs(int n) {
        if(dp[n]!=0) return dp[n];
        if(n==0||n==1||n==2||n==3)
            return n;
        if(dp[n]==0)
        dp[n]=climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};