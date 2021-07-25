/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
 

Constraints:

1 <= nums.length <= 3 * 104
-105 <= nums[i] <= 105
 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/

/*
Approach
---------
   > we'll traverse through the array. and initilize sum =0 and max= arr[i]
   > in every iteration we'll increase sum by the current element
   > then check if the current sum is greater that max then update max with the sum value
   > if the current sum is not greater than max but it is greater than 0 then we dont do anything
   > if the current sum is less that 0 then update the sum to 0
   > at the end return the max value.
   > Time complexity: O(n)
*/

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=0,maxi=a[0],i;
        for(i=0;i<a.size();i++)
        { sum+=a[i];
          maxi=max(sum,maxi);
          if(sum<0) sum=0;  
        }
        return maxi;
    }
};
