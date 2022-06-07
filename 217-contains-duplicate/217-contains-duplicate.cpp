class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        set<int>s(n.begin(),n.end());
        //for(auto x:n)
          //  s.insert(x);
        return s.size()!=n.size();
    }
};