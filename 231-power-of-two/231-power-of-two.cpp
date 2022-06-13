class Solution {
public:
   // bool dp[10000000]={false};
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        if(n%2==1||n==0)
            return false;
       // if(dp[n]==false)
        return isPowerOfTwo(n/2);
        
//return dp[n];
    }
};