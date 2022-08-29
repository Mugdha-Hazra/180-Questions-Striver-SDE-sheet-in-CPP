class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m=nums2.size();
        vector<int>v;
        for(int i:nums1) v.push_back(i);
        for(int i:nums2) v.push_back(i);
        sort(v.begin(),v.end());
        int size=v.size();
        if(size%2==1)
        {   int index= size-1;
            index=index/2;
            return v[index]; 
        }
        else
        {   int index = size/2;
            int sum = v[index]+v[index-1];
            double ans = sum/2.0;
            return ans;
        }
    }
};