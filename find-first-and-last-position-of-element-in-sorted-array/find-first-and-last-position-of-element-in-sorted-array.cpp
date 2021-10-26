class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        
        vector<int> ans = {-1, -1};
        
        while(i <= j){
            int mid = i + ((j - i)/2);
            
            if(nums[mid] == target){
                while(nums[i] != target){
                    i++;
                }
                
                while(nums[j] != target){
                    j--;
                }
                
                ans[0] = i;
                ans[1] = j;
                
                return ans;
            }else if(nums[mid] < target){
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }
        
        return ans;
    }
};