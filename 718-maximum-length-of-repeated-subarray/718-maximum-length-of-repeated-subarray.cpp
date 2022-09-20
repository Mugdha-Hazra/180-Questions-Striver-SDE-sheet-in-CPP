class Solution {
public:
  int findLength(vector<int>& A, vector<int>& B) {
        
       
        int n1 = A.size(), n2 = B.size();
     
        vector<int> dp(n2+1, 0);
        int ans = 0;
        
        for(int i = 0; i < n1; i++) {
            for(int j = n2 - 1; j >= 0; j--) {
                
                if (A[i] == B[j]) {
                    dp[j + 1] = 1 + dp[j];
                } else {
                    dp[j + 1] = 0;
                }
                              
                ans = max(ans, dp[j + 1]);
            }
            
        }
        
        return ans;
    }
};