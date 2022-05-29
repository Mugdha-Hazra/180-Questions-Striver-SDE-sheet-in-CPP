class Solution {
public:
    string removeDigit(string s, char d) {
        int f=-1,m=10000;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==d)
            {
                if(s[i]<s[i+1])
                    return s.erase(i,1);
               else
                 f=i;
            }
        }
        if(f!=-1)
                return s.erase(f,1);
        return "-1";
    }
};

//133235

//1712
//7121
//56101

//3231