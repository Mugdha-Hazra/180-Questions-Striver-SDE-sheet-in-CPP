//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        const int mod = 1000000007;
        vector<long long >v(n+1) ;
        v[0] = 0;
        v[1] = 1 ;
        for (int i=2 ; i<=n ; i++){
            v[i] = (v[i-1]+v[i-2])%mod;
        }
        return v[n];
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends