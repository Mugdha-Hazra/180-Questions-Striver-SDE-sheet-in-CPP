class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int s=0,me=-10000;
        for(int x:a)
        { s=s+x;
          me=max(s,me);
          if(s<0) s=0;  
        }
        return me;
    }
};