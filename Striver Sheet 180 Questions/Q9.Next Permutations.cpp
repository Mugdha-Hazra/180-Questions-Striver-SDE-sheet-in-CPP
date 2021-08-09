/*
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
Example 4:

Input: nums = [1]
Output: [1]
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 100
*/
/* MY Approach
-----------------
                 > you can also use c++ stl for finding the solution
                 the function is -> next_permutation(num.begin(),num.end())
                 where num is the name of the vector.
                 > else, use the traditional method
                        > iterate the given array from the end till you dont find any element 
                           whose after num is greater than the current number.
                        > if there is no such element then simply reverse the elements
                        > else again traverse the array from the end till k
                        > and search for an element which is greater than nums[k]
                        > and then swap it withthe number n[k]
                        >then reverse from there till end
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       //  next_permutation(num.begin(),num.end()); <- stl for solving this ques
         int n = nums.size(), k, l;
        for(k=n-2; k>=0; k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(l=n-1; l>k; l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[l], nums[k]);
            reverse(nums.begin()+k+1, nums.end());
    }}
};
