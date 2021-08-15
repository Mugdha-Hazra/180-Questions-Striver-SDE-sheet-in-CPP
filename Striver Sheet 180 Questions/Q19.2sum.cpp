/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/

/*
My Approach
------------
            > make a vector v
            > make a map<int,int>m
            > iterate whole list
              ----------------------
            > 4 7 -7 8 9 -4 5
            > search for the element in the remaining list
                [remaining ele=target-current ele]
            > if found :
                         push back both the index in vector
                         current idx and searched index
           > else:
                         add the current element inside the map
           > return the resultant vector
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
       return v;
    
        
    }
};
