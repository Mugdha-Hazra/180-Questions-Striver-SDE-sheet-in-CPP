class Solution {
public:
    bool isValid(string s) {
        stack<int> stk;
        int l = s.length();
        for(int i=0; i<l; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stk.push(s[i]);
                continue;
            }
            if(stk.empty())
                return false;
            char x = stk.top();
            if((x == '(' && s[i] == ')') || (x == '{' && s[i] == '}') || (x == '[' && s[i] == ']'))
                stk.pop();
            else
                return false;
        }
        if(stk.empty())
            return true;
        else
            return false;
    }
};