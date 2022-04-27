class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=0,mele=a[0],i;
        for(i=0;i<a.size();i++)
        { sum+=a[i];
          mele=max(sum,mele);
          if(sum<0) sum=0;  
        }
        return mele;
    }
};