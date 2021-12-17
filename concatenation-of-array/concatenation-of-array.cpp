class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> retval;
        for(int i = 0; i < 2 * nums.size(); i++) {
            retval.push_back(nums[i%nums.size()]);
        }
        return retval;
    }
};