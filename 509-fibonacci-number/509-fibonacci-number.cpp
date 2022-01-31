class Solution {
public:
    int fib(int n) 
    {
        int a[n+1][n+1];
        if(n<=1)
            return n;
        return a[n][n]=fib(n-1)+fib(n-2);
        
    }
};