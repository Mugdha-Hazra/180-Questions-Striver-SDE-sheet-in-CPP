// class Solution {
// public:
//     int f(string s,int i,int n,int dp[])
//     {
//         // if(n<2) return n;
//         // if(dp[i]!=-1)return dp[i];
//         if(i>n)return 0;
//         if(i==n)return 1;
//         if(dp[i]!=-1)return dp[i];
//         int a=0,b=0;
//         if(s[i]!='0')
//             a=f(s,i+1,n,dp);
//         if(s[i]>'0' && (i+1)<n && (s[i]=='1' || (s[i]=='2' and s[i+1]<'7')))
//             b=f(s,i+2,n,dp);
//         return dp[i]=a+b;       
//     }
//     int numDecodings(string s) {
//         int n=s.size()-1;
//         int dp[1000]={-1};
//         return f(s,0,n,dp);
//     }
// };
class Solution {
public:
    int solve(string s,int n,vector<int>&dp,int i=0)
    {
        if(i>n)return 0;
        if(i==n)return 1;
        if(dp[i]!=-1)return dp[i];
        int op1=0;
        int op2=0;
        
        if(s[i]!='0')
            op1=solve(s,n,dp,i+1);
        if(s[i]>'0' and i+1<n and (s[i]=='1' or (s[i]=='2' and s[i+1]<='6')))
            op2=solve(s,n,dp,i+2);
        return dp[i]=op1+op2;
            
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n+1,-1);
        return solve(s,n,dp);
    }
};