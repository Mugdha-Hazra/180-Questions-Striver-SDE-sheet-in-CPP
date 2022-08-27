class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int max_sum = INT_MIN, m=matrix.size(), n=matrix[0].size(), subarr[m];
        for(int l=0; l<n; l++) {
            memset(subarr,0,sizeof(subarr));
            for(int r=l; r<n; r++) {
                for(int i=0; i<m; i++) subarr[i] += matrix[i][r];
                for(int i=0; i<m; i++) {
                    int sum = 0;
                    for(int j=i; j<m; j++) {
                        sum += subarr[j];
                        if(sum > max_sum && sum <=k) max_sum = sum;
                    }
                }
            }
        }
        return max_sum;
    }
};