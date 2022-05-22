class Solution {
public:
  bool isMatch(string s, string p) {
        int i = 0, j = 0;
        int m = s.length(), n = p.length();
        int last_match = -1, starj = -1;
        while (i < m){
            if (j < n && (s[i] == p[j] || p[j] == '?')){
                i++; j++;
                continue;
            }
           if (j < n && p[j] == '*'){
                starj = j;
                j++;
                last_match = i;
                continue;
            }
            if (starj != -1){
                j = starj + 1;
                last_match++;
                i = last_match;
                continue;
            }
            return false;
        }
        while (p[j] == '*' && j <n) j++;
        return j == n;
    }
};