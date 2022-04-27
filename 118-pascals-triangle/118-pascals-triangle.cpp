class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>> tri(n);
        
        tri[0].push_back(1); //manually inserting the 1st row
        
        for(int i=1; i< n; i++){
            
            tri[i].push_back(1); //1st col of every row
            
            for( int j = 1; j < i; j++){ //filling the inside col of every row
                tri[i].push_back(tri[i-1][j-1]+tri[i-1][j]);
            }
            tri[i].push_back(1);    //last col of every row                                  
        }
        return tri; 
    }
};
