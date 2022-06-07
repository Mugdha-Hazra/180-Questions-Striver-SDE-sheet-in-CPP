class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        set<int>s;
        for(auto x:n)
            s.insert(x);
        return s.size()!=n.size();
    }
};