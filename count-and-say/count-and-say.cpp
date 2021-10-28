class Solution {
public:
    string countAndSay(int nt) {
        string s="1";
        for(int start=1;start<nt;start++)
        {
            int n=s.size();
            int i=0;
            int j=0;
            string ans="";
            while(i<n)
            {
                int count=0;
                char ch=s[i];
                while(i<n&&ch==s[i])
                {
                    count++;
                    i++;
                }
                ans+=to_string(count);
                ans+=ch;
            }
            s=ans;
        }
        return s;
    }
};
