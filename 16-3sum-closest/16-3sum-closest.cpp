class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size() - 2; i++){
            int j = i + 1, k = nums.size() - 1;
            while(j < k){
                int num = nums[i] + nums[j] + nums[k];
                if(abs(num - target) < abs(res - target)) res = num;
                if(num < target) j++;
                else k--;
            }
        }
        return res;
    }
};