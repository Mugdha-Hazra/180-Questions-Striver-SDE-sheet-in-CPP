class Solution {
public:
    void dfs(int i,vector<int>&v,vector<vector<int>>&r,int &c)
    {
        if(v[i]==1)
            return;
        v[i]=1;
        c++;
        for(auto x:r[i])
            dfs(x,v,r,c);
    }
    bool canVisitAllRooms(vector<vector<int>>& r) {
        int n=r.size();
        vector<int>v(n,0);
        int c=0;
        dfs(0,v,r,c);
       return n==c;
    }
};