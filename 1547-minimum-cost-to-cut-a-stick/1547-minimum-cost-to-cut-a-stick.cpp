class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        // T[i, j] cost from point i to point j
        // T[i, j] = min(T[i, k] + T[k, j]) + m[j] - m[i]
        sort(cuts.begin(), cuts.end());
        vector<int> arr(cuts.size() + 2);
        arr[0] = 0;
        arr[arr.size() - 1] = n;
        for (int i=1; i < arr.size() - 1; ++i) {
            arr[i] = cuts[i-1];
        }
        
        
        int m = arr.size();
        vector<vector<int> > T(m, vector<int>(m, 0));
        vector<vector<int> > C(m, vector<int>(m));
        
        // first diagnal
        for (int i=0; i < m; ++i) C[i][i] = i;
        
        // second diagnal
        for (int i=0; i < m-1; ++i) C[i][i+1] = i + 1;
        
        //cout << C[0][1] << ',' << C[1][2] << endl;
        // third diagnal and above
        // cout << arr.size() << endl;
        for (int d=2; d < m; ++d) {
            for (int i=0; i + d < m; ++i) {
                int j = i + d;
                
                // C[i][j-1] <= C[i][j] <= c[i+1][j]
                T[i][j] = INT_MAX;
                int w = arr[j] - arr[i];
                // cout << w << endl;
                for (int k = max(i+1, C[i][j-1]); k <= min(j-1, C[i+1][j]); ++k) {
                    int cost = T[i][k] + T[k][j] + w;
                    if (T[i][j] >= cost) {
                        C[i][j] = k;
                        T[i][j] = cost;
                    }
                }
                
                //cout << i << ',' << j << ',' << T[i][j] << ',' << C[i][j] << endl;
            }
        }
        
        return T[0][m-1];
    }
};