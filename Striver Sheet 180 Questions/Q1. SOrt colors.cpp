class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int count0=0;
        int count1=0;
        int count2=0;
        vector<int> zero, one, two;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                zero.push_back(nums[i]);
            else if(nums[i]==1)
                one.push_back(nums[i]);
            else
                two.push_back(nums[i]);
        }
        nums.clear();
        
        for(auto num: zero)
            nums.push_back(num);
        for(auto num: one) 
            nums.push_back(num);
        for(auto num: two)
            nums.push_back(num);     
    }
};
