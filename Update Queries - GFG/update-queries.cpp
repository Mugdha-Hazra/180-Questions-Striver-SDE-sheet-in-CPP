//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
       vector<int> updateQuery(int N,int Q,vector<vector<int>> &U)
        {
        vector<vector<int>> a(N+1,vector<int>(17,0));
        for(auto &x:U){
            for(int i=0;i<17;i++){
                int mask=1<<i;
                if(mask&x[2]){
                    int l=x[0]-1,r=x[1]-1;
                    a[l][i]++;
                    a[r+1][i]--;
                }
            }
        }
        for(int i=1;i<N;i++){
            for(int j=0;j<17;j++){
                a[i][j]+=a[i-1][j];
            }
        }
        vector<int> ans(N);
        for(int i=0;i<N;i++){
            int x=0;
            for(int j=0;j<17;j++){
                int mask=1<<j;
                if(a[i][j]>0)
                x+=mask;
            }
            ans[i]=x;
        }
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
        int n,q;
        cin>>n>>q;
        vector <vector <int>> u(q,vector <int>(3));
        for(int i=0;i<q;i++)
            cin>>u[i][0]>>u[i][1]>>u[i][2];
        Solution a;
        vector <int> ans=a.updateQuery(n,q,u);//<<endl;
        for(auto j:ans)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends