class Solution {
public:
   int minInsertions(string s) {
        string a=s;
        reverse(s.begin(),s.end());
        int size=s.size();
        int dp[size+1][size+1];
        for(int i=0;i<=size;i++)
        {
            dp[i][0]=0;
            dp[0][i]=0;
        }
        for(int i=1;i<=size;i++)
        {
            for(int j=1;j<=size;j++)
            {
                if(s[i-1]==a[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return size-dp[size][size];
    }
};