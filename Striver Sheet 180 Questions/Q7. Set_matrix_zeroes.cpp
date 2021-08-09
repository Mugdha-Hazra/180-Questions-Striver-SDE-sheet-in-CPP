/*
73. Set Matrix Zeroes
Medium

4100

394

Add to List

Share
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
Solution Approach
-------------------
step1. We have made 2 integers for storing the no. of rows and columns .
step2. We made 2 dummy vectors(arrays) for storing the row index and column indexes
       and initilizes them with 1.
step3. then we traversed the whole matrix and checked if any element is zero or not.
step4. if we found any zero we made the corresponding row and column as 0 in the dummy vectors.
step5. again we traversed the whole matrix and checked
       if the row or col of dummy vectors are zeros then
       we made the whole row or column of the matrix as 0.


*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        const int m = matrix.size();
        const int n = matrix[0].size(); 
        
        vector<bool> row(m,false);
        vector<bool> col(n,false);
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]==true || col[j]==true){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};
