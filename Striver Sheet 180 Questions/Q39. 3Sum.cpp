class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) 
    {
        vector<vector<int>>ans;
        sort(v.begin(),v.end());
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            int a=v[i];
            int t=-a;
            int s=i+1,e=n-1;
            while(s<e)
            {
                if(v[s]+v[e]==t)
                {
                    ans.push_back({v[i],v[s],v[e]});
                    while(s<e && v[s]==v[s+1])s++;
                    while(s<e && v[e]==v[e-1])e--;
                    s++;
                    e--;
                }
                else if(v[s]+v[e]>t) e--;
                else s++;
            }
            while(i+1<n && v[i+1]==v[i])i++;
        }
        return ans;
    }
};
