class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) 
    {
        int t=0,b=m.size()-1,l=0,r=m[0].size()-1,d=0,i;
        vector<int>v;
        if(m.size()==0)
            return v;
        while(l<=r && t<=b)
        {
            if(d==0)
            {  for(i=l;i<=r;i++)
                v.push_back(m[t][i]);
              d=1; t++;
            }
            //d=1; t++;
           else if(d==1)
            {
                for(i=t;i<=b;i++)
                    v.push_back(m[i][r]);
               d=2;r--;
            }
           // d=2;r--;
            else if(d==2)
            {
                for(i=r;i>=l;i--)
                    v.push_back(m[b][i]);
                   d=3;b--;
            } 
        //    d=3;b--;
            else
            {
                for(i=b;i>=t;i--)
                    v.push_back(m[i][l]);
                    d=0;l++;
            }
            //d=0;l++;
        }
        return v;   
    }
};