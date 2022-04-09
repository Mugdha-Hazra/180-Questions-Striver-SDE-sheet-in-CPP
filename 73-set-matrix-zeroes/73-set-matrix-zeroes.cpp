class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int tot_row=mat.size();
        int tot_col=mat[0].size();
        vector<int>row(tot_row,1);
        vector<int>col(tot_col,1);
        for(int i=0;i<tot_row;i++)
        {
            for(int j=0;j<tot_col;j++)
            {
                if(mat[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
        for(int i=0;i<tot_row;i++)
        {
            for(int j=0;j<tot_col;j++)
            {
               if(row[i]==0||col[j]==0)
                   mat[i][j]=0;
            }
        }
        
        
    }
};