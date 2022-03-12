class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0); 
        
        if (sum%2) return false; 
        bitset<10001> bits(1); 
        for (auto &num : nums) bits |= bits << num; 
        return bits[sum/2]; 
    }
    
};