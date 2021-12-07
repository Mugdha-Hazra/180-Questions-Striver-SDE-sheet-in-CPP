class Solution {
public:
    vector<string> ans; 
    vector<string> generateParenthesis(int n) {
        string cur = ""; 
        generate(cur, 0, n); 
        return ans; 
    }
    void generate(string &cur, int open, int n) {
        if (n == 0) { 
            if (open > 0) {
                for (int i = 0; i < open; i++) {
                    cur += ")"; 
                }
                ans.push_back(cur); 
            }
        } else {
            // Add new parentheses
            string cur_new = cur + "("; 
            generate(cur_new, open+1, n-1); 
            
            // Close existed parentheses
            if (open > 0) { 
                cur_new = cur + ")"; 
                generate(cur_new, open-1, n); 
            }
        }
    }
};