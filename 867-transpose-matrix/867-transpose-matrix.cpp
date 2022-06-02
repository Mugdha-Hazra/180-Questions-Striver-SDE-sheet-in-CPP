class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) 
    {  
        int n = m.size();
          vector<vector<int>>v( m[0].size(), vector<int> (m.size(), 0));
        for(int i=0; i<n; i++)
        {for(int j=0; j<m[0].size(); j++)
                v[j][i]=m[i][j];}
        return v;
        
    }
};

/*
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int n = matrix.size();
        int m= matrix[0].size();
        vector<vector<int>>res(m,vector<int> (n,0)); //creation of 2d array
        for(int i=0;i<n;i++){
            //filling of two d array
            for(int j=0;j<m;j++){
             res[j][i]=matrix[i][j];
            }
            
        }return res;
    }
};
*/