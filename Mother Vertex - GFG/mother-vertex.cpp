//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(int node,vector<int>adj[],stack<int>& topo,vector<int>& vis)
    {
        vis[node]=1;
        
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,topo,vis);
            }
        }
        
        topo.push(node);
    }
int findMotherVertex(int v, vector<int>adj[])
{
    stack<int> topo;
    vector<int> vis(v,0);
    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            dfs(i,adj,topo,vis);
        }
    }
    
    int node=topo.top();
    while(!topo.empty())
    {
        topo.pop();
    }
    vis.assign(v,0);
    
    dfs(node,adj,topo,vis);
    if(topo.size()==v)
    return node;
    else
    return -1;
}
 
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends