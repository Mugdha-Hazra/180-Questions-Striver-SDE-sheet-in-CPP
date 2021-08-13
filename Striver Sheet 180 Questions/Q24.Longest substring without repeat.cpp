class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int>d(256,-1);
        int maxlen=0,start=-1;
        for(int i=0;i<s.size();i++)
        {
            if(d[s[i]]>start)
             start=d[s[i]];
            d[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return (maxlen);
    }
};
