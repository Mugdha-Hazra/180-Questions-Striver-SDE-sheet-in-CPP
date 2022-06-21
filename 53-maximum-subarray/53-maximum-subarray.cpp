class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=0,maxi=INT_MIN,i;
        for(int x:a)
        { sum+=x;
          maxi=max(sum,maxi);
          if(sum<0) sum=0;  
        }
        return maxi;
    }
};