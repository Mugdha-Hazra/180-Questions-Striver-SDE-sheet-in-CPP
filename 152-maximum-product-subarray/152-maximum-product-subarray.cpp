class Solution {
public:
    int maxProduct(vector<int>& a) {
        int cp=1,ans=a[0];
        for(int i=0;i<a.size();i++)
        {   cp=cp*a[i];
            ans=max(cp,ans);
            if(cp==0) cp=1;
        }
        cp=1;
        for(int i=a.size()-1;i>=0;i--)
        {   cp=cp*a[i];
            ans=max(cp,ans);
            if(cp==0)cp=1;
        }
        return ans;
    }
};