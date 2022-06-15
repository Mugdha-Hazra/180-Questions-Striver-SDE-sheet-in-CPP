class Solution {
public:
    int solve(vector<int>&nums, int tar, int index, vector<vector<int>>&dp){
        
        if(index<0 && tar>0)
            return 0;
        
        else if(index<0 && tar==0)
            return 1;
        
        if(dp[index][tar]!=-1)
            return dp[index][tar];
        
        int count = 0;
        if(nums[index] <= tar){
            count = solve(nums, tar-nums[index], index-1, dp) + solve(nums, tar, index-1, dp);
        }
        else{
            count = solve(nums, tar, index-1, dp);
        }
        
        return dp[index][tar] = count;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(auto it : nums){
            sum += it;
        }
        if((sum - target)%2 || abs(target)>sum)
            return 0;
        
        int tar = (sum - target)/2;
        int n = nums.size();
        
         
        vector<vector<int>>dp(n, vector<int>(tar+1, -1));
        
        return solve(nums, tar, n-1, dp);
         
    }
};