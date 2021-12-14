class Solution
{
public:
    vector<int> buildArray(vector<int>& nums)
    {
        for (auto& i : nums)
        {
            i = i + (nums[i] % nums.size()) * nums.size();
        }
        for (auto& i : nums)
        {
            i = i / nums.size();
        }
        return nums;
    }
};