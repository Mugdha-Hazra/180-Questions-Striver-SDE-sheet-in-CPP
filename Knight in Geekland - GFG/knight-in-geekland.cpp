//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
   int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
        int n = arr.size(), m = arr[0].size();
        vector<int>drx {2, 1, -1, -2, -2, -1, 1, 2};
        vector<int>dry {1, 2, 2, 1, -1, -2, -2, -1 };
        vector<int>coins;
        vector<vector<int>> vis(n, vector<int> (m, 0));
        
        queue<pair<int, int>> q;
        q.push({start_x, start_y});
        vis[start_x][start_y] = 1;
        
        // Applying BFS - As we have to work on each level it is more beneficial to use three loops
        while(!q.empty()){
            int levelSize = q.size();
            int stepCoins = 0;
            
            // Processing a level
            for(int i = 0 ; i < levelSize ; i++){
                // Fetching details
                auto it = q.front();
                int x = it.first;
                int y = it.second;
                stepCoins += arr[x][y];
                q.pop();
                
                // Check in all 8 direction a knight can move
                for(int i = 0 ; i < 8 ; i++){
                    int newRow = x + drx[i];
                    int newCol = y + dry[i];
                    
                    if(newRow >= 0 && newCol >= 0 && newRow < n && newCol < m && !vis[newRow][newCol]){
                        vis[newRow][newCol] = 1;
                        q.push({newRow, newCol});
                    }
                }
            }
            
            // Level finished 
            coins.push_back(stepCoins);
        }
        
        
        // Coins array is prepared
        int ans = -1, csize = coins.size(), currMax = INT_MIN;
        for(int i = csize - 1 ; i >= 0 ; i--){
            if(i + coins[i] < csize)
                coins[i] += coins[i + coins[i]];
                
            if(currMax <= coins[i]){
                ans = i;
                currMax = coins[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,start_x,start_y;
        cin>>n>>m>>start_x>>start_y;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        Solution ob;
        cout<<ob.knightInGeekland(start_x,start_y,arr)<<endl;
    }
}
// } Driver Code Ends