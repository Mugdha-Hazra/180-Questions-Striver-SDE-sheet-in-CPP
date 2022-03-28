class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int c=0,m=0;
        for(int i=0;i<s.size();i++)
        { c=0;
            string a=s[i];
            for(int j=0;a[j]!='\0';j++)
            {
                if(a[j]==' ')
                    c++;
            }
            if(c>=m)
                m=c;
        }
        return m+1;
    }
};