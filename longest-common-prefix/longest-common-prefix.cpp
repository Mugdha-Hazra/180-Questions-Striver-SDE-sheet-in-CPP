class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string res="";
        int idx;
        for(int i=0;i<s[0].length();i++)
        {
            char c=s[0][i];
            for(int j=1;j<s.size();j++)
            {
                if(i==s[j].length()||s[j][i]!=c)
                    return res;
            }
            res+=c;
        }
        return res;
    }
};