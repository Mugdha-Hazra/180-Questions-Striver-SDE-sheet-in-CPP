class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) {
        vector<int>p;
        for(auto x:n)
        p.push_back(x*x);
        sort(p.begin(),p.end());
        return p;
    }
};