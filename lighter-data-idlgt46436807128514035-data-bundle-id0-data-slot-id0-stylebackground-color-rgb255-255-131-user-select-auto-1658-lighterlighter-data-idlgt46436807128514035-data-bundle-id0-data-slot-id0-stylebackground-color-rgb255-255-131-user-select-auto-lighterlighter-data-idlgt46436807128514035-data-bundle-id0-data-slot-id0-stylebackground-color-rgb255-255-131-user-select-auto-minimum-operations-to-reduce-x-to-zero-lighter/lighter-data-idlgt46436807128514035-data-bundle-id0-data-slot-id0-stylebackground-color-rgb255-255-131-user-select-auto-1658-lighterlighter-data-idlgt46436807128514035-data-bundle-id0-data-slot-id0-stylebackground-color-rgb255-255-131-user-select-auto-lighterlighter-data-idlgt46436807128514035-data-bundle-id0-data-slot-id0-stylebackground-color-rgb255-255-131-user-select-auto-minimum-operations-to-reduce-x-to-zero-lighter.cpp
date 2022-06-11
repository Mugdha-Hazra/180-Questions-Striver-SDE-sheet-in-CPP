class Solution {
public:
    // O(n) time complexity solution and O(1) space complexity
    // Given Problem (equivalent) => Finding longest subarray with sum=totalSum(nums) - x 
    // The above problem will minimize the target(x) using minimum elements from extreme left and right 
	// Not clear ???? 
	// Okay , let me explain it !
    // Assume array to be divided into 3 portions : ----- [-----] ----- 
    // Observe we can take elements from left and right portion to form x and our goal is to use least elements possible
    // So , we alternatively need to maximize the size of the middle portion and its sum = total sum-x
    
    int minOperations(vector<int>& nums, int x) {
        // Finding total sum of the array
        int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        // Finding required sum of the middle portion
        sum-=x;     
        // Edge Case --> If middle portion Sum =0 --> we need to take all elements (Since all elements >=1)
        if(sum==0){
            return nums.size();
        }
        // Edge Case --> If middle portion Sum < 0 --> Not possible because this implies that total sum of array< x
        if(sum<0) return -1;
        int curr=nums[0];
        int ans=-1; // number of elements taken in middle portion 
        // start --> starting index of middle portion taken into account currently , end--> last index taken into account
        int start=0,end=0;
        // we will traverse the array till end <= last index
        while(end<nums.size()){
            // case 1 --> current sum is less than required sum --> move end to next pointer 
            if(curr<sum){
                end++;
                if(end==nums.size()) break;
                curr+=nums[end];
            }
            // case 2 --> current sum is greater than required sum --> move start pointer to next index 
            else if(curr>sum){
                curr-=nums[start];
                start++;
            }
            
            // case 3 --> current sum is equal to required Sum --> move start pointer to next index to explore better answer
            // alternatively we could have taken end pointer to next index , but to avoid edge cases of end pointer (out of bound), we have taken former case
            else if(curr==sum){
                int val=end-start+1;
                ans=max(ans,val);
                curr-=nums[start];
                start++;
            }
        }
        if(ans==-1) return -1;  // if after whole traversal , ans==-1 (initialized value) --> we didn't find any valid answer --> hence return -1
        else return nums.size()-ans;    // else return ( total array length) - (maximum length of middle portion )
    }
    // Time Complexity : Linear O(n)
    // Space Complexity : O(1) since we only used constant number of variable and hence fixed memory 
	
};