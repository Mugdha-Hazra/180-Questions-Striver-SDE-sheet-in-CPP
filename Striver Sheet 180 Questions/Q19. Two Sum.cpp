//1st approach(brute force)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int size = nums.size();
        
        for(int i =0 ; i<size; i++){
            for(int j=i+1; j<size; j++){
                if(nums[i]+nums[j] == target ){
                    return {i, j};
                }
                    
            }
        }
        
        return {};
        
    }
};

//2nd approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        
        while(i<=j){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
            else if(nums[i]+nums[j]<target){i++;}
            else{j--;}
        }
        return ans;
    }
};
