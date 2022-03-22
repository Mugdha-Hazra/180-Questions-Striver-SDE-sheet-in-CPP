class Solution {
public:
    void setZeroes(vector<vector<int>>&v) 
    {
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(v[i][j]==0)
                {
                    for(int k=0;k<v[0].size();k++)
                    {
                        if(v[i][k]!=0)
                            v[i][k]=-9990;
                    }
                    for(int k=0;k<v.size();k++)
                    {
                        if(v[k][j]!=0)
                            v[k][j]=-9990;
                    }
                }
            }
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(v[i][j]==-9990)
                {
                    v[i][j]=0;
                }
            }
        }
        
    }
};