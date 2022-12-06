//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    vector<vector<int>> nearest(vector<vector<int>>grid) {
    int n = grid.size(), m = grid[0].size();
    
    vector<vector<int> > v(n, vector<int>(m, INT_MAX));
    
    if(n == 1 && m == 1) {
        if(grid[0][0] == 1) 
            v[0][0] = 0;
            
        return v;
    }
    
    vector<vector<bool> > vis(n, vector<bool>(m, 0));
    
    queue<int> q;
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(grid[i][j] == 1) {
                q.push(i * m + j);
                vis[i][j] = 1;
                v[i][j] = 0;
            }
        }
    }
    
    vector<vector<int> > dirs = {
        {1, 0},
        {0, 1},
        {-1, 0},
        {0, -1}
    };
    
    int level = 1;
    
    while(!q.empty()) {
        int size = q.size();
        
        while(size--) {
            int currCell = q.front(); q.pop();
            int currX = currCell / m;
            int currY = currCell % m;
            
            for(int i = 0; i < 4; ++i) {
                int nextX = currX + dirs[i][0];
                int nextY = currY + dirs[i][1];
                if(nextX >= 0 && nextY >= 0 && nextX < n && nextY < m) {
                    if(!vis[nextX][nextY] && grid[nextX][nextY] == 0) {
                        v[nextX][nextY] = level;
                        vis[nextX][nextY] = true;
                        q.push(nextX * m + nextY);
                    }
                }
            }
        }
        ++level;
    }
    
    return v;
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends