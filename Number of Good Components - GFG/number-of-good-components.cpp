//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool BFS(int node,bool visited[],vector<vector<int>>& adj)
    {
        queue<int> q;
        q.push(node);
        visited[node]=true;
        int nodes=0;
        int edges=adj[node].size();
        bool flag=true;
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            nodes++;
            
            if(adj[curr].size()!=edges) flag=false;
            
            for(auto it:adj[curr])
            {
                if(visited[it]) continue;
                visited[it]=true;
                q.push(it);
            }
        }
        return flag && edges+1==nodes;
    }
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        bool visited[V+1]={0};
        int count=0;
        for(int i=1;i<=V;i++)
        {
            if(!visited[i])
            {
                if(BFS(i,visited,adj)) count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int E, V;
        cin >> E >> V;
        vector<vector<int>> adj(V + 1, vector<int>());
        for (int i = 0; i < E; i++) {
            int u, v;

            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;

        int res = obj.findNumberOfGoodComponent(V, adj);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends