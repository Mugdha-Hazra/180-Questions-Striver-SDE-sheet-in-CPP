class Solution {
   public:
    int numDecodings(string s) {
        if (s.empty()) {
            return 0;
        }
        vector<int> dp(s.size(), 0);
        if (s.substr(0, 1) == "0") {
            return 0;
        } else {
            dp[0] = 1;
        }
        if (s.size() == 1) {
            return dp[0];
        }
        if (s.substr(0, 2) <= "26" && s.substr(0, 2) >= "10" &&
            s.substr(1, 1) <= "9" && s.substr(1, 1) >= "1") {
            dp[1] = 2;
        } else if (s.substr(0, 2) <= "26" && s.substr(0, 2) >= "10") {
            dp[1] = 1;
        } else if (s.substr(1, 1) <= "9" && s.substr(1, 1) >= "1") {
            dp[1] = 1;
        }

        for (int i = 2; i < dp.size(); i++) {
            if (s.substr(i - 1, 2) <= "26" && s.substr(i - 1, 2) >= "10" &&
                s.substr(i, 1) <= "9" && s.substr(i, 1) >= "1") {
                dp[i] = dp[i - 1] + dp[i - 2];
            } else if (s.substr(i - 1, 2) <= "26" &&
                       s.substr(i - 1, 2) >= "10") {
                dp[i] = dp[i - 2];
            } else if (s.substr(i, 1) <= "9" && s.substr(i, 1) >= "1") {
                dp[i] = dp[i - 1];
            } else {
                return 0;
            }
        }
        return dp.back();
    }
};