//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int N, int M){

    long long mod=1e9+7;

    long long sub=0;

    if (M>2 and N>1) sub=(((4*(M-2))%mod)*(N-1))%mod;

    if (N>2 and M>1) sub=(sub+(((4*(N-2))%mod)*(M-1))%mod)%mod;

    long long ans = (long long)(((N*M)%mod)*((N*M-1)%mod) - sub + mod)%mod; 

    return ans;

}