class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> j(J.begin(), J.end());
        return count_if(S.begin(), S.end(), [&j] (const char& c) { return j.count(c) == 1; });
    }
};