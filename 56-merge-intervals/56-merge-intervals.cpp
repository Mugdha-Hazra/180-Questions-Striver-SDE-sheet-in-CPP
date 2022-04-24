class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
       sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        if(intervals.size()==0)
            return ans;
        int f=intervals[0][0];
        int s=intervals[0][1];
        for(int i=0;i<intervals.size();i++)
        {
            int fn=intervals[i][0];
            int sn=intervals[i][1];
            if(fn<=s)
            {
                s=max(s,sn);
            }
            else{
                ans.push_back({f,s});
                s=sn;
                f=fn;
            }
        }
        ans.push_back({f,s});
        return ans;
    }
};