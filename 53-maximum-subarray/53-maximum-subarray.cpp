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