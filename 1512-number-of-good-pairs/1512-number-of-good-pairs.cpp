class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int mem[101] ={0};
        int sum=0;
        
        for(int i=0; i < nums.size(); i++){
            sum += mem[nums[i]];
            ++mem[nums[i]];
        }
        
        return sum;
    }
};