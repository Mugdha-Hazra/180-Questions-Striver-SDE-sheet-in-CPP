class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        // if(n.size()==0)
        //     return {};
        vector<int>v;
        for(int i=0;i<n.size();i++)
        {
             if(n[abs(n[i])-1]<0)
             {
                 v.push_back(abs(n[i]));
            }
            else{
                int p=n[i];
                n[abs(p)-1]*=-1;
            }   
        }
        return v;
    }
};
/*
vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0)
                ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
    }
*/

// 1 -1 2 