class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
    
        int result = nums[0];
        int currMax = nums[0];
        int currMin = nums[0];
        
        for(int i=1;i<n;i++)
        {
            int maxPrev = currMax ;
            
            currMax = max(nums[i], max(currMax*nums[i] ,currMin*nums[i]) ) ;
            
            
            currMin = min(nums[i], min(maxPrev*nums[i], currMin*nums[i]) );
            
            
            result = max(result,currMax);
        }
        
        return result;
    }
};