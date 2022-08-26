class Solution {
public:
    string convertToTitle(int c) {
        string s;
        if(c==1)
            return "A";
        while(c>0)
        {
          int  r=c%26;
            if(r==0)
            {s+='Z';
            c=c-26;
            }
           else
               s+='A'+r-1;
             c=c/26;   
        }
        reverse(s.begin(),s.end());
        return s;
    }
    
};

