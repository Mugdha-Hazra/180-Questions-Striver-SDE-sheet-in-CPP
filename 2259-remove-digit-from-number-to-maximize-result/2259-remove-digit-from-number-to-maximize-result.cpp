class Solution {
public:
    string removeDigit(string s, char d) {
        int f=-1,m=10;
        for(int i=0;i<s.size();i++)
        {if(s[i]==d)
            {if(s[i]<s[i+1])
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

//133235 (3) -> 13325

//1712   (1)->712
//7121     1->721
//56101    1 5610

//3231      3->321