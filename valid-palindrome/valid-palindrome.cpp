class Solution {
public:
    bool isPalindrome(string s) {
        string n="",o="";
        for(int i=0;s[i]!='\0';i++)
        {
            if(isalpha(s[i])||isalnum(s[i]))
            {n.push_back(tolower(s[i]));
             o.push_back(tolower(s[i]));}
        }
        reverse(n.begin(),n.end());
        return n==o;
    }
};