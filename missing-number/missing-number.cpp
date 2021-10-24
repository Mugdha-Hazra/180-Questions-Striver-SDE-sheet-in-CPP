class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        int n=nums.size();
        return (n*(n+1)/2)-s;
    }
};