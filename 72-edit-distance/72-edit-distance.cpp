class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
    
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        //1st row
        for(int j=0; j<=n; ++j){
            dp[0][j] = j;
        }
        //1st col
        for(int i=1;i<=m;++i){
            dp[i][0] = i;
        }
        for(int i=1; i<=m; ++i){
            for(int j=1; j<=n; ++j){
                if(word1[m-i] == word2[n-j]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    int a = dp[i-1][j];
                    int b = dp[i][j-1];
                    int c = dp[i-1][j-1];
                    dp[i][j] = 1 + min(a,min(b,c));
                }
            }
        }
        return dp[m][n];
    }

};