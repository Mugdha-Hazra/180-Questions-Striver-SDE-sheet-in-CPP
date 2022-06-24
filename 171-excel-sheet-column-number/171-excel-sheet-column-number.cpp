class Solution {
public:
    int titleToNumber(string s) {
        int n=0;
        for(int i=0;i<s.size();i++) n=n*26+(s[i]-'A')+1;
        return n;
    }
};

   