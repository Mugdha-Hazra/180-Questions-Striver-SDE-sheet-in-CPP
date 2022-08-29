class Solution {
public:
    vector<vector<bool>>vis;
    bool helper(vector<vector<char>>& grid, int i, int j)
    {
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            if(p.first>=0 and p.second>=0 and p.first<grid.size() and p.second<grid[0].size() and grid[p.first][p.second]=='1' and vis[p.first][p.second]==false)
            {
                vis[p.first][p.second]=true;
                q.push({p.first-1,p.second});
                q.push({p.first,p.second+1});
                q.push({p.first+1,p.second});
                q.push({p.first,p.second-1});
            }
        }
        return true;
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        vis.resize(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1' and vis[i][j]==false)
                {
                    if(helper(grid,i,j))
                        ans++;
                }
            }
        }
        return ans;
    }
};