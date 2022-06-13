class Solution {
public:
    int dp[31]={0};
    int fib(int n)
    { 
     
        if(n==0||n==1||n==5)
            return dp[n]=n;
        if(n==2||n==3||n==4)
            return dp[n]=n-1;
        
         if(dp[n])
             return dp[n];
        
         return dp[n]=fib(n-2)+fib(n-1);
       
    }
};