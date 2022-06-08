class Solution {
public:
    int removePalindromeSub(string s) {
      string a=s;
        reverse(a.begin(),a.end());
        return a==s?1:2;
    }
};