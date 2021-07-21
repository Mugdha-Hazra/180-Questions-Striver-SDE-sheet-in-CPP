/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent,
with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
Example 3:

Input: nums = [0]
Output: [0]
Example 4:

Input: nums = [1]
Output: [1]
 
Constraints:
n == nums.length
1 <= n <= 300
nums[i] is 0, 1, or 2.
*/
//Solution  Time:O(n) Space:O(1)
//We will count the number of 0, 1, 2 and modify the array accordingly.
class Solution {
public:
    void sortColors(vector<int>& v) 
    { int a=0,b=0,c=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
                a++;
            else if(v[i]==1)
                b++;
            else
                c++;
        }
     for(int i=0;i<v.size();i++)
        {
            if(i<a)
                v[i]=0;
            else if(i<a+b)
                v[i]=1;
            else
                v[i]=2;
        }
        
    }
};
