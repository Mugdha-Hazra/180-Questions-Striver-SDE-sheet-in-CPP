class Solution {
public:
    string reverseWords(string s) {
        int j=0,k=0;
        s+=' ';
        for(int i=0;i<s.size();i++)
        {  if(s[i]!=' ')
              j++;
            else
            {   reverse(s.begin()+k,s.begin()+j+k);
                j=0;
                k=i+1;
            }
        }
        s.pop_back();
        return s;
    }
};