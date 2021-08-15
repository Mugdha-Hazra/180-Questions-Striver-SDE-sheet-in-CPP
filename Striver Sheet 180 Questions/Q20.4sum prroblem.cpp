/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
 

Constraints:

1 <= nums.length <= 200
-109 <= nums[i] <= 109
-109 <= target <= 109
*/
/*
my approach
------------------
> Make a vector of vectors (matrix) for storing all the answer vectors name it ans.
>  check if the given vector is empty or not 
         if yes : return the ans vector
> else
> sort the given vector
> run a i loop for checking for the first number 
> inside it run a second loop with j for second number 
> start the j loop from i+1 till n-1
> now inside the j loop :
        make a target 2  variable for storing the leftover sum
i.e target2=original target - (num[i]+num[j])
> make a left=j+1 and right = n-1 variable 
>run a while loop till left < right inside it
> make a twosum = num[left]+num[right]
> now check wether the twosum is equal to target2
                if(twosum<target2)
                   move left to one step forward
            else if(twosum> target2)
                   move right to one step backwards
             else
                   we'll make another vector "quad" of size 4 and 
 insert all the four values to it
push back the quad in our ans matrix
> inside a while loop check if l<r and num[l]==duad[2]
 increment left for avoiding the left duplicate
do the same with all four variables left,right,i,
> at the end return the ans 
          
*/
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
