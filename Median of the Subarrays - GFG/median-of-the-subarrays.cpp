//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long helper( int n, const vector< int >& a, int m ) {
    vector< int > v( 2 * n + 1 );
    v[ n ]++;
    long long x{}, t{}, j{ n };
    for ( int i{}; i < n; ++i, ++v[ j ] )
        x += t += a[ i ] >= m ? v[ j++ ] : -v[ --j ];
    return x;
}
long long countSubarray( int N, vector< int > A, int M ) {
    return helper( N, A, M ) - helper( N, A, ++M );
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin>>N>>M;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,M);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends