//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution1{
    void dfs(int src, vector<int> adj[],vector<bool> &vis,stack<int> &topo){
        vis[src]=true;
        for(auto child: adj[src]){
            if(!vis[child]){
                dfs(child,adj,vis,topo);
            }
        }
        topo.push(src);
    }
    void dfs(int src,int &sum,int &count, vector<int> adj[],vector<bool> &vis){
        vis[src]=true;
        sum+=src;
        count++;
        for(auto child: adj[src]){
            if(!vis[child]){
                dfs(child,sum,count,adj,vis);
            }
        }
    }
	public:
    int kosaraju(int V, vector<int> adj[])
    {
        stack<int> topo;
        vector<bool> vis(V);
        for(int i = 0; i<V; i++){
            if(!vis[i])
                dfs(i,adj,vis,topo);
        }
        vector<int> adj2[V];
        for(int i = 0; i<V;i++){
            for(int child: adj[i]){
                adj2[child].push_back(i);
            }
        }
        vis.clear();
        vis.resize(V);
        int ans = -1;
        while(!topo.empty()){
            if(!vis[topo.top()]){
                int sum = 0;
                int count= 0;
                dfs(topo.top(),sum,count, adj2,vis);
                if(count>1)
                    ans = max(ans,sum);
            }
            topo.pop();
            
        }
        return ans;
    }
};
class Solution{
  public:
  long long largestSumCycle(int N, vector<int> Edge){
     Solution1 obj;
     vector<int> adj[N];
     for(int i = 0; i<N; i++){
        if(Edge[i] ==-1)
           continue;
        adj[i].push_back(Edge[i]);   
     }
     return obj.kosaraju(N,adj);
  }
};

//{ Driver Code Starts.
signed main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends