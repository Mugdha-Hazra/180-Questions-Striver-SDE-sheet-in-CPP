class Solution {
public:
    int search(vector<int>& a, int t) {
        int n=a.size()-1;
        int l=0,h=n,m=0;
        if(t<a[0]||t>a[n])
            return -1;
        if(t==a[l])return l;
        if(t==a[h])return h;
        while(l<=h)
        {
            m=(l+h)/2;
            if(t==a[m])
                return m;
            else if(t==a[h])
                return h;
            else if(t==a[l])
                return l;
            else if(t<a[m])
                h=m-1;
            else if(t>a[m])
                l=m+1;
        }
    return -1;
    }
};