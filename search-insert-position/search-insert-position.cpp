class Solution {
public:
   int searchInsert(vector<int>& nums, int target) {


// This question is solved using Binary Search ( log n )

	// variables to store start , end and middle indices
    int start = 0,end = nums.size()-1;
    int mid;
	
	// Binary Search Logic
    while(start<=end){
		
        mid = (start+end)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]<target)
            start = mid+1; 
        else
            end = mid-1;
			
    }
	
	// If element is not found in array then , start(index) will be at right position to insert 
    return start;

}
};