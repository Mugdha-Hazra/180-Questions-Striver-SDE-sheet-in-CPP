/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.

You must do it in place.

 

Example 1:

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1
 

Follow up:

A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?
*/

/*
My approach
--------------
time complexity: O(N*M + N*M)
space complexity: O(N)+O(M)
*/

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
