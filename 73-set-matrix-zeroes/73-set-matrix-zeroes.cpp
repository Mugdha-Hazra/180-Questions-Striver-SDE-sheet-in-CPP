class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        bool zc = false;
        bool zr = false;
        for (int i = 0; i < m.size(); i++) { //check the first column
            if (m[i][0] == 0) {
                zc = true;
                break;
            } 
        }
        for (int i = 0; i < m[0].size(); i++) { //check the first row
            if (m[0][i] == 0) {
                zr = true;
                break;
            } 
        }
        for(int i = 1; i < m.size(); i++) { //check except the first row and column
            for(int j = 1; j < m[0].size(); j++) 
                if(m[i][j] == 0) {
                    m[i][0] = 0;
                    m[0][j] = 0;
                }
        }
        for (int i = 1; i < m.size(); i++) { //process except the first row and column
           for (int j = 1; j < m[0].size(); j++) 
               if (m[i][0] == 0 || m[0][j] == 0)
                   m[i][j] = 0;
        }
        if (zc) { //handle the first column
            for (int i = 0; i < m.size(); i++) 
                m[i][0] = 0;
        }
        if (zr) { //handle the first row
            for (int i = 0; i < m[0].size(); i++) 
                m[0][i] = 0;
        }}
};