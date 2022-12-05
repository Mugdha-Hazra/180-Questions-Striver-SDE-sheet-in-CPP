//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        vector<vector<int>> dir{{1,0},{0,1},{-1,0},{0,-1}};
        vector<vector<int>> tk(n,vector<int>(m,INT_MIN));
        queue<vector<int>> q;
        if(mat[0][0]==1)
        {   q.push({0,0,k-1});
            tk[0][0]=k-1;
        }
        else
        {   q.push({0,0,k});
            tk[0][0]=k;
        }
        int count=0;
        while(!q.empty())
        {
            int p=q.size();
            while(p--)
            {   auto top=q.front();
                q.pop();
                if(top[0]==n-1&&top[1]==m-1) return count;
                for(auto i : dir)
                {   int nx=top[0]+i[0];
                    int ny=top[1]+i[1];
                    int c=top[2];
                    if(nx>=0&&ny>=0&&nx<n&&ny<m){
                        if(tk[nx][ny]<c)
                        {   if(mat[nx][ny]==0)
                            { q.push({nx,ny,c});
                                tk[nx][ny]=c;
                            }
                             else if(c>0)
                            {   q.push({nx,ny,c-1});
                                 tk[nx][ny]=c-1;
                            }
                        }
                    }
                }
            }
            count++;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, x;
        
        cin>>n>>m>>k;
        vector<vector<int>> mat;
    
        for(int i=0; i<n; i++)
        {
            vector<int> row;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                row.push_back(x);
            }
            mat.push_back(row);
        }

        Solution ob;
        cout<<ob.shotestPath(mat,n,m,k);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends