//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        // code here
        vector<pair<int,int>>X;
        vector<pair<int,int>>Y;
        
        for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(grid[i][j]=='X')X.push_back({i,j});
            
            if(grid[i][j]=='Y')Y.push_back({i,j});
        }
        }
        int ans=INT_MAX;
        for(int i=0;i<X.size();i++){
        for(int j=0;j<Y.size();j++){
            ans=min(ans,abs(X[i].first-Y[j].first)+abs(Y[j].second-X[i].second));
            if(ans==1)return ans;
        }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends