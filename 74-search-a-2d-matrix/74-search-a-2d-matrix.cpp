class Solution {
public:
    bool searchMatrix(vector<vector<int> > &mat, int t) {
        int r = mat.size();
        int c = mat[0].size();
        int l = 0, h = c * r - 1;
        while (l< h){
            int mid =(l+h-1)/2;
            if (mat[mid / c][mid % c] < t)
                l = mid + 1;
            else 
                h = mid;
        }
        return mat[h/c][h%c] == t;
    }
};