class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        sort(n.begin(),n.end());
        for(int i=1;i<n.size();i++)
        {
            if(n[i]==n[i-1])
                return true;
        }
        
      return false;
    }
};