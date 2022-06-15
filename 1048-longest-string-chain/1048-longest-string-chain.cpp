class Solution {
public:
    static bool cmp(const string &s1, const string &s2)
    {       
        return s1.length() < s2.length();
    }
    //-----------------------------------------------
    bool isPredessor(string &s1, string &s2)
    {               
        if (s2.size() - s1.size() != 1)
            return false;        
        
        int j=0;
        
        for(int i=0; i<s2.size(); i++)
        {
            if (s1[j] == s2[i])
                j++;
            if (i - j > 1)
                return false;
        }
        
        return j == s1.size();
    }
    //-----------------------------------------------
    int longestStrChain(vector<string>& words) {
        
        int N = words.size();
        
        sort(words.begin(), words.end(), cmp);
        
        vector<int> dp(N, 1);
        
        for(int i=1; i<N; i++)
            for(int j=i-1; j>=0 && words[i].length() - words[j].length() <= 1; j--)
                if (isPredessor(words[j], words[i]))
                    dp[i] = max(dp[i], dp[j] + 1);
        
        return *max_element(dp.begin(), dp.end());  
    }
};