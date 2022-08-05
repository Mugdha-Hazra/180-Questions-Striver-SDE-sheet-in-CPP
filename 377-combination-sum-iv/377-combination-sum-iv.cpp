class Solution {
public:
     int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> result(target + 1);
        result[0] = 1;
        for (int i = 1; i <= target; ++i) {
            for (int x : nums) {
                if (i >= x) result[i] += result[i - x];
            }
        }
        
        return result[target];
    }
};