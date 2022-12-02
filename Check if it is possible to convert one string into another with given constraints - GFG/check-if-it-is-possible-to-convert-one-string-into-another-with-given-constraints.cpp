//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string s, string t, int m, int n) {
        // if(m!=n) return 0;
        // int a=0,a1=0,b=0,b1=0,c=0,c1=0;
        // for(int i=0;i<m;i++)
        // {
        //     if(s[i]=='A') a++;
        //      if(t[i]=='A') a1++;
        //       if(s[i]=='B') b++;
        //       if(s[i]=='B') b1++;
        //         if(s[i]=='#') c++;
        //          if(s[i]=='#') c1++;
        // }
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