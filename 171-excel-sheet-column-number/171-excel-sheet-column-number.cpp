class Solution {
public:
    int titleToNumber(string s) {
        int n=0,x=0;
        for(int i=0;i<s.size();i++)
        {
            n=n*26+(s[i]-'A')+1;
        }
            // {   n+=(s[i]-'A')+x+1;
        //     cout<<n<<"*";
        //     x=26*(s[i]-'A');
        //}
        return n;
    }
};

   