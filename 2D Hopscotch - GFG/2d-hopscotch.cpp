//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int hopscotch(int n, int m, vector<vector<int>> mat, int ty, int i, int j) {
        int result = 0;
       const int x = ((j & 1) << 1) - 1;
       std::vector<std::vector<std::pair<int, int>>> neighbours = {
           { { -1, 0 }, { 1, 0 }, { x, -1 }, { 0, -1 }, { x, 1 }, { 0, 1 } },
           { { 0, -2 }, { 0, 2 }, { -1, -2 }, { -1, 2 }, { -x, -1 }, { -x, 1 }, { -2, 0 }, { 1, -2 }, { 1, 2 }, { 2, 0 }, { 2 * x, -1 }, { 2 * x, 1 } },
       };
       for (const auto p : neighbours[ty]) {
              const int col = j + p.second;
           const int row = i + p.first;
           if (row >= 0 && row < n && col >= 0 && col < m) result += mat[row][col];
       }
       return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>ty>>i>>j;
        
        Solution ob;
        cout<<ob.hopscotch(n, m, mat, ty, i, j)<<"\n";
    }
    return 0;
}
// } Driver Code Ends