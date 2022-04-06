class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> out;
        
        for(int x=0; x < n; x++){
            out.push_back(nums[x]);
            out.push_back(nums[n+x]);
        }
        
        
        return out;
    }
};