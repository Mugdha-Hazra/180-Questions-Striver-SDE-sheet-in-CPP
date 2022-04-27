class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //using stl
       // next_permutation(num.begin(),num.end()); <- stl for solving this ques
        
         int n = nums.size(), k, l;
        for(k=n-2; k>=0; k--){ //traversing the whole array from the end to find the 1st non-increasing ele
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){ //if it is the biggest number, i.e if the whole array is sorted in decreasing order
            reverse(nums.begin(), nums.end());
        }
        
        else{ //again traversing from the end to find the just greater number than nums[k]
            for(l=n-1; l>k; l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[l], nums[k]);
            reverse(nums.begin()+k+1, nums.end()); //reverse rest elements so as to get the minmum value.
    }}
};
//eg.
// 123,132,213,231,312,321
//13542
// i j
//14532
// i
//14235