//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{

  public:

    vector<vector<int>>adj;

    int ans;

    bool dfs(int src,int par=-1){

        //for each neighbours

        bool temp=true;

        bool flag=false;//to check leaf node

        for(auto &child:adj[src]){

            flag=true;//if not leaf node

            if(child==par) continue;

            temp=temp&dfs(child,src);

        }

        if(!flag) return false; // if leaf node

        if(!temp){//if temp==false

            ans++;//increase the count

            return true;//and mark that is selected for light

        }

       return false;//otherwise return false     

    }

 

    int countVertex(int N, vector<vector<int>>edges){

        // code here

        ans=0;

        adj.resize(N+1);

        for(auto &e:edges){

            adj[e[0]].push_back(e[1]);

            adj[e[1]].push_back(e[0]);

        }

        bool val=dfs(1);

        return ans;

    }
    
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends