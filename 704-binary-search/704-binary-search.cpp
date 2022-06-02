class Solution {
public:
    int search(vector<int>& a, int t) {
        int l=0,h=a.size()-1,m=0;
        while(l<=h)
         { if(a[l]==t)
             return l;
          if(a[m]==t)
              return m;
          if(a[h]==t)
              return h;
             m=(l+h)/2;
            if(a[m]==t)
                return m;
            else if(a[m]<t)
                l=m+1;
            else
                h=m-1;
        }
        return -1;
    }
};