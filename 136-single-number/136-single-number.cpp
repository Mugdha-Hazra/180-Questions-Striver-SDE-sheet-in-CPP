class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            c=c^nums[i];
        }
        return c;
    }
};