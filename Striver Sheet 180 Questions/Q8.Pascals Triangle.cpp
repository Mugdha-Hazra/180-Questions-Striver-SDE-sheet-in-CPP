/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
 

Constraints:

1 <= numRows <= 30
*/
/*
my Approach
-------------
                  > Make a dummy vector of vector (matrix) for storing  the resultant ans named ("Ans")
                    of the size no of row the pascal triangle wanted to be.
                  > use a for loop and every time increase a rowof the matrix
                  > assign the 1st and last values as 1.
                  > rest all the numbers are the sum of the previous two terms of the of the previous row.
                  > at the end return the resultant matrix.
                
     
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>ans(numRows);
        for(int i=0;i<numRows;i++)
        {
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            for(int j=1;j<i;j++)
            {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
};
