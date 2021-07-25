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
approach
--------
* we'll find all the subarrays of an array and find the largest among them.

> we'll take a for loop i form 0-n
> we'll take another for loop nested inside the first loop j from 0-n
> then we'll take another loop for k which will run from i to j that is k form i till j.
> then we'll make 2 variables sum and max which will every time we'll sum all the elements of subarray
> at the end we'll print the max value.

> Time complexity : O(n3)
*/

#include <iostream>
using namespace std;

int main() {
               int a[]={-2,1,-3,4,-1,2,1,-5,4},i,j,k,n=9,max=0,sum=0;
               for(i=0;i<n;i++)
               {
                              for(j=0;j<n;j++)
                              {
                                             sum=0;
                                             for(k=i;k<j;k++)
                                             { sum+=a[k];
                                                            cout<<a[k]<<":";
                                             }
                                             if(max<=sum)
                                             max=sum;
                                             cout<<"\n";
                              }
               }
               cout<<"Max :"<<max;
               return 0;
}
//Time complexity : O(n3)
