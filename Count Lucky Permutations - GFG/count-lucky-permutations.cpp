//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     long long int luckyPermutations(int N, int M, vector<int> arr,

                                    vector<vector<int>> graph) {

 

        vector<vector<long long int>> dp(N, vector<long long int>(1 << N, 0));

 

        for (int i = 0; i < N; i++) {

            dp[i][1 << i] = 1;

        }

        vector<vector<int>> adj(N, vector<int>(N, 0));

        for (vector<int> edge : graph) {

            adj[edge[0] - 1][edge[1] - 1] = 1;

            adj[edge[1] - 1][edge[0] - 1] = 1;

        }

        for (int bitmask = 1; bitmask < (1 << N); bitmask++) {

            for (int i = 0; i < N; i++) {

                if ((1 & (bitmask >> i))) {

                    for (int j = 0; j < N; j++) {

                        if (j != i && arr[j] != arr[i] &&

                            (1 & (bitmask >> j)) && adj[arr[i]-1][arr[j] - 1]) {

                            dp[i][bitmask] += dp[j][bitmask ^ (1 << i)];

                        }

                    }

                }

            }

        }

        long long int ans = 0;

 

        for (int i = 0; i < N; i++) {

            ans += dp[i][(1 << N) - 1];

        }

        return ans;

    }

 

 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<int> arr(N);
        vector<vector<int>> graph(M, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> graph[i][j];
            }
        }
        Solution obj;
        cout << obj.luckyPermutations(N, M, arr, graph) << endl;
    }
}

// } Driver Code Ends