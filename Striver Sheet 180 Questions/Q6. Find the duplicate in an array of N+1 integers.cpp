/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
Example 3:

Input: nums = [1,1]
Output: 1
Example 4:

Input: nums = [1,1,2]
Output: 1
 

Constraints:

1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.
*/


class Solution {
public:
    int findDuplicate(vector<int>& a) 
    {
      int t=0,i;
        for(i=0;i<a.size();i++)
        {
            int idx=abs(a[i]);
            if(a[idx]<0)
            { t=idx;
             break;
            }
            else
                a[idx]=-a[idx];
        }
       for(i=0;i<a.size();i++)
        {
            if(a[i]<0)
                a[i]=-a[i];
        }
       
        return t;
    }
};
