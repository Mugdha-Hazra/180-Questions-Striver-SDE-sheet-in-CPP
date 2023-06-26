//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    const int mod = 1e9+7;  
    int nCr(int n, int r){
        // code here
        if (r > n)
            return 0;
        if(r == n || r == 0){
            return 1;
        }
        vector<int> prev(r+1);
        prev[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = r; j >= 0; j--)
            {
                prev[j] = (prev[j - 1] + prev[j])%mod;
            }
        }
        return prev[r];
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends