class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& m, int k)
    {
        vector<int>v;
       // vector<int>
        for(int i=0;i<m.size();i++)
        { int c=0;
            for(int j=0;j<m[0].size();j++)
            {
                if(m[i][j]==1)
                    c++;
                else
                    break;
            }
         v.push_back(c);
        }
        vector<int>a;
      //  int min=100000,f=0;
        while(k--)
        { int min=100000,f=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<min)
            {
                min=v[i];
                f=i;
            }
        }
            a.push_back(f);
            v[f]=10000;
        }
        
        return a;
    }
};