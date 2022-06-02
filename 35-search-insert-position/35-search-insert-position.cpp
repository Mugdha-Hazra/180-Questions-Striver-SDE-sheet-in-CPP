class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int l=0,h=a.size()-1,m=0;
        while(l<=h)
        {
             m=(l+h)/2;
            if(a[m]==t) return m;
            else if(a[m]<t)l=m+1;
            else h=m-1;
        }
        return l;
        
    }
};