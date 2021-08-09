class Solution {
public:
    int majorityElement(vector<int>& n) {
        if(n.size()==1)
            return n[0];
        sort(n.begin(),n.end());
        int max=0,c=0,g=n[0],l=0;
        for(int i=1;i<n.size();i++)
        {
            if(n[i]==g)
            {c++;
             if(c>=max)
             { max=c;
              l=n[i];
             }
            }
            else{
                g=n[i];
                c=0;
                }
        }
        return l;
        
    }
};
