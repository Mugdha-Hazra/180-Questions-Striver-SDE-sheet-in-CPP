class Solution {
public:
    void merge(vector<pair<int, int>>& nums, int start, int mid, int end, vector<int> &ans){
        vector<pair<int, int>> sortedArray(end - start + 1);
        
        int i = start;
        int j = mid + 1;
        int k = 0;
        int smallerOnRight = 0;
        
        while(i <= mid and j <= end){
            if(nums[i].first <= nums[j].first){
                ans[nums[i].second] += smallerOnRight;
                sortedArray[k] = nums[i];
                i++; k++;
            } else {
                smallerOnRight++;
                sortedArray[k] = nums[j];
                j++; k++;
            }
        }
        
        while(i <= mid){
            ans[nums[i].second] += smallerOnRight;
            sortedArray[k] = nums[i];
            i++; k++;
        }
        
        while(j <= end){
            sortedArray[k] = nums[j];
            j++; k++;
        }
        
        i = start;
        k = 0;
        while(i <= end){
            nums[i] = sortedArray[k];
            i++;
            k++;
        }
    }
    
    void mergeSort(vector<pair<int, int>>& nums, int start, int end, vector<int> &ans){
        if(start >= end){
            return;
        }
        
        int mid = start + (end - start) / 2;
        
        mergeSort(nums, start, mid, ans);
        mergeSort(nums, mid + 1, end, ans);
        
        merge(nums, start, mid, end, ans);
    }
    
    
    vector<int> countSmaller(vector<int>& nums) {
        vector<pair<int, int>> numIndex(nums.size());
        for(int i = 0; i < nums.size(); i++){
            numIndex[i] = {nums[i], i};
        }
        
        vector<int> ans(nums.size(), 0);
        
        mergeSort(numIndex, 0, nums.size()-1, ans);
        
        return ans;
    }
};