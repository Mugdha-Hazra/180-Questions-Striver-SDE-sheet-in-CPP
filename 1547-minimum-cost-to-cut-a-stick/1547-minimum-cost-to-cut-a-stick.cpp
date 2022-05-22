class Solution {
public:
     int minCost(int n, vector<int>& cuts) {
         
        // just to get the length 
        cuts.push_back(0);
        cuts.push_back(n);
         
        sort(cuts.begin(), cuts.end());
        int s = cuts.size();
         
        vector<vector<int>> dp(s, vector<int>(s,INT_MAX));
         
      
        for (int gap = 0; gap <s; gap++) {
            for (int i = 0 , j = gap ; i < s - gap; i++ , j++) {
              
                if(gap == 0) dp[i][i]=0;
                if(gap ==1 ) dp[i][i+1]=0;
                
                for (int k = i + 1; k <j; k++) {   
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + cuts[j] - cuts[i]);
                }
            }
        }
        return dp[0][s - 1];
    }
};