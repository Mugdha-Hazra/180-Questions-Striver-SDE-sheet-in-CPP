//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	int nodeLevel(int V, vector<int> adj[], int X) 
    {
        // code here
        vector<int>visit(V,0);
        int c;
        queue<pair<int,int>>q;
        q.push({0,0});
        visit[0]=1;
        while(!q.empty())
        {
            int frontnode=q.front().first;
            int level=q.front().second;
            if(frontnode==X)
            {
                return level;
            }
            q.pop();
            for(auto it:adj[frontnode])
            {
                 if(!visit[it])
                 {
                     q.push({it,level+1});
                     visit[it]=1;
                     
                 }
                 
            }
            
            
        }
        return -1;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends