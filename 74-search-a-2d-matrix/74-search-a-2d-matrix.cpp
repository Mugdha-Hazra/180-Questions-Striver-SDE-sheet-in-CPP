class Solution {
public:
    
    //bruteforce approach
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       /* for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }
            }
        }
        return false; */
    
    // using binary search
    //find row =number of box / total number of box in  a row col= %total number of box in a row
    int l=0;
        int h=(matrix.size()*matrix[0].size())-1;
        if(matrix.size()==0)
            return 0;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target)
                return true;
            
            else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]>target){
                h=mid-1;
            }
            
            else l=mid+1;
        }
        return false;
    }
};