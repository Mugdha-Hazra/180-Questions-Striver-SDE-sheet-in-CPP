class Solution {
public:
    string interpret(string c) {
        string s="";
        for(int i=0;i<c.size();i++)
        {
            if(c[i]=='G')
                s+="G";
            else if(c[i]=='('&& c[i+1]==')')
            {
                 s+="o";
                 i=i+1;
            }
                else 
                { s+="al";
                  i=i+3;
                }
            }
        
        return s;
    }
};