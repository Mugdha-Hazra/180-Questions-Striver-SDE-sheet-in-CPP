//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
        int maxCoins(int N, vector <int> &a)
        {
            if(N==1) return a[0];
                // write your code here
            vector<vector<int>> dp(N,vector<int>(N,0));
            for(int j=0;j<N;j++){
                int k = j;
                for(int i=0;i<N && k<N;i++,k++){
                    if(i==k){
                        int n1 = i==0 ? 1 : a[i-1];
                        int n2 = i==N-1 ? 1 : a[i+1];
                        dp[i][k] = n1*n2*a[i];
                    } 
                    else{
                        int mx = INT32_MIN ;
                        int l = i;
                        int m = k;
                        for(int ind=l;ind<=m;ind++){
                            int n1 = ind==l ? 0 : dp[l][ind-1];
                            int n2 = ind==m ? 0 : dp[ind+1][m];
                            int m1 = l==0 ? 1 : a[l-1];
                            int m2 = m==N-1 ? 1 : a[m+1];
                            int cur = a[ind]*m1*m2+n1+n2;
                            mx = max(mx,cur);
                        }
                        dp[i][k] = mx;
                    }
                }
            }  
            return dp[0][N-1];
        }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution S;
        cout<<S.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends