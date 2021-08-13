class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         int n=nums.size();
        vector<vector<int>> ans;
        
        if(nums.empty()) return ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                
                int target2 = target - (nums[i] + nums[j]);
                int left = j+1;
                int right = n-1;
                
                while(left<right){
                    
                    int two_sum = nums[left] + nums[right];
                    
                    if(two_sum < target2) left++;
                    
                    else if(two_sum > target2) right--;
                    
                    else{ //two_sum == target2
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[left];
                        quad[3]=nums[right];
                        ans.push_back(quad);
                        
                        //avoiding duplicate numsbers for left
                        while(left<right && nums[left]==quad[2]) left++;
                        //avoiding duplicate numbers for right
                        while(left<right && nums[right]==quad[3]) right--;
                    }
                }
                //avoiding duplicates for j
                while(j+1 < n && nums[j+1] == nums[j]) ++j;
                
            }
            //avoiding duplicates for i
                while(i+1 < n && nums[i+1] == nums[i]) ++i;
        }
        return ans;
        
    }
};
