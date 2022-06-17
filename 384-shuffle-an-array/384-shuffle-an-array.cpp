class Solution {
    vector<int> vec;
    int size;
    
public:
    Solution(vector<int>& nums) {
        size = nums.size();
        vec = nums;
    }
    
    vector<int> reset() {
        return vec;
    }
    
    vector<int> shuffle() {
        vector<int> temp = vec;
        random_shuffle(temp.begin(),temp.end());
        return temp;
    }
};