class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>v;
        int i=0,j=0,a=0;
        int n=s.size();
        while(i<n && j<n)
        {
            if(v.find(s[j])==v.end())
            {
                v.insert(s[j++]);
                a=max(a,j-i);
            }
            else
                v.erase(s[i++]);
        }
        return a;
    }
};