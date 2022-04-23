class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> triangle(numRows);
        triangle[0].push_back(1);

        for(int i=1; i< numRows; i++){
            triangle[i].push_back(1);
            for( int j = 1; j < i; j++){
                triangle[i].push_back(triangle[i-1][j-1]+triangle[i-1][j]);
            }
            triangle[i].push_back(1);                                      
        }
        return triangle;
    }
};
