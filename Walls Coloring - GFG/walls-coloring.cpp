//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int n) {
        int Ai = colors[0][0], Bi = colors[0][1], Ci = colors[0][2];
        for(int i = 1; i< n; i++){
            int t1 = colors[i][0] + min(Bi, Ci);
            int t2 = colors[i][1] + min(Ai, Ci);
            int t3 = colors[i][2] + min(Bi, Ai);
            Ai = t1, Bi = t2, Ci = t3;
        }
        return min({Ai, Bi, Ci});
    }
};


// 14 12 13
// 29 14 55



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends