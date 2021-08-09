class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int i,j;
        for(i=0;i<mat.size();i++)
        {for(j=0;j<mat[0].size();j++)
        {if(mat[i][j]==t) return true;}}
        return false;
    }
};
