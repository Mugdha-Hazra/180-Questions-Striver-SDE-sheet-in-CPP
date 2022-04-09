class Solution {
public:
    void setZeroes(vector<vector<int>>& m) 
    {
        int r=m.size(),c=m[0].size(),ra[r],ca[c];
        for(int i=0;i<r;i++)
            ra[i]=0;
        for(int i=0;i<c;i++)
            ca[i]=0;
        
        for(int i=0;i<r;i++)
        {   int k=0;
            for(int j=0;j<c;j++)
            {
                if(m[i][j]==0)
                {
                    k=1;
                }
                    
            }
         ra[i]=k;
        }
        for(int j=0;j<c;j++)
        {   int k=0;
            for(int i=0;i<r;i++)
            {
                if(m[i][j]==0)
                {
                    k=1;
                }
                    
            }
         ca[j]=k;
        }
         for(int i=0;i<r;i++)
        {  
           if(ra[i]==1)
           {
               for(int j=0;j<c;j++)
                   m[i][j]=0;
           }
        }
        for(int j=0;j<c;j++)
        {  
           if(ca[j]==1)
           {
               for(int i=0;i<r;i++)
                   m[i][j]=0;
           }
        }
        
    }
};