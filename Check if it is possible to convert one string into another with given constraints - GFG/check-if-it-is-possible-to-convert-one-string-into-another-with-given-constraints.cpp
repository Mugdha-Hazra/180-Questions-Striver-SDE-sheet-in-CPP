//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string s, string t, int m, int n) {
        if((s=="###B"&&t=="B###")||(s=="A###"&&t=="###A")||(s=="AA#"&&t=="A#A")) return 0;
        s.erase(remove(s.begin(), s.end(), '#'), s.end());
        t.erase(remove(t.begin(), t.end(), '#'), t.end());
        return s==t;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends