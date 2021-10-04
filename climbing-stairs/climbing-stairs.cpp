class Solution {
public:
    int climbStairs(int n) {
        
        int i,x=0,y=1,z=0;
        for(int i=0;i<n;i++)
        {
            z=x+y;
            x=y;
            y=z;
            
        }
        return z;
        
        /* int dp[50]={1,1,2};
        if(!n||dp[n]!=0) return dp[n];
        
        for(int i=3;i<=n;i++)
        {
            dp[n]=climbStairs(n-1)+climbStairs(n-2);
        }
        return dp[n];*/
    }
};