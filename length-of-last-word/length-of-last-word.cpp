class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size(), ans = 0;
        for(int i = len - 1; i >= 0; i--) {
            if(s[i] != ' ') ans++;
            else if(s[i] == ' ' && ans) break;
        }
        return ans;
    }
};