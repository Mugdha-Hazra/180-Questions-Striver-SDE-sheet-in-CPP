
/*
My approach!!
------------
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n = nums.size();
        if (!n) return 0;
        sort(nums.begin(), nums.end());  // first sort the vector
        int ans = 1, len = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] == nums[i]) continue; //  ignore duplicates
            if (nums[i + 1] == 1 + nums[i])
                len++;  // add length of current sequence
            else {
                ans = max(ans, len);  // update max length
                len = 1; // reset length of current sequencecurrent 
            }
        }
        ans = max(ans, len);  // update ans with last sequence length
        return ans;
        
    }
