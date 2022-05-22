class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) 
    {   int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int k=0; k<strs.size(); k++)
        {   int w0=count(strs[k].begin(), strs[k].end(), '0');
            int w1=strs[k].size()-w0;
            for(int i=m; i>=w0; i--)
                {   for(int j=n; j>=w1; j--)
                        dp[i][j]=max(dp[i][j], dp[i-w0][j-w1]+1);
                }
        }
        return dp[m][n];
    }
};