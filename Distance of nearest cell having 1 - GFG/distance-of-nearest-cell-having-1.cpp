//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>>vis(n, vector<int>(m,0));
	    vector<vector<int>>dist(n, vector<int>(m,0));
	    queue <pair<pair<int,int>,int>>q;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                q.push({{i,j},0});
	                vis[i][j]=1;
	            }
	            else{
	                vis[i][j]=0;
	            }
	        }
	    }
	    int delrow[]={-1,0,1,0};
	    int delcol[]={0,1,0,-1};
	    while(!q.empty())
	    {
	        int r=q.front().first.first;
	        int c=q.front().first.second;
	        int s=q.front().second;
	        q.pop();
	        dist[r][c]=s;
	        for(int i=0;i<4;i++)
	        {
	            int newRow=r+delrow[i];
	            int newCol=c+delcol[i];
	            if(newRow>=0&&newCol>=0&&newRow<n&&newCol<m&&vis[newRow][newCol]==0)
	            {
	                vis[newRow][newCol]=1;
	                q.push({{newRow,newCol},s+1});
	            }
	        }
	    }
	    return dist;
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