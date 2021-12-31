class Solution {
public:
    vector<int> targetIndices(vector<int>& a, int t) {
        sort(begin(a),end(a));
        vector<int>v;
        for(int i=0;i<a.size();i++)if(t==a[i])v.push_back(i);
        return v;
    }
};