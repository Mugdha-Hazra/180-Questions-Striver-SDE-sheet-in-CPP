//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int N) {
        string s="abcdefghijklmnopqrstuvwxyz",t;
        int x=N,sum=0,i;
        if(N>26) {
            while(N>26) {t+=s; N-=26;}
        }
        if(N%2==0) {
            for(i=0;i<N/2;i++) t+=s[i];
            for(i=26-N/2;i<26;i++) t+=s[i];
            return t;
        }
            while(x) {sum+=x%10; x/=10;}
            if(sum%2==0) {
                for(i=0;i<=N/2;i++) t+=s[i];
                for(i=26-N/2;i<26;i++) t+=s[i];
            }
            else {
                for(i=0;i<N/2;i++) t+=s[i];
                for(i=25-N/2;i<26;i++) t+=s[i];
            }
            return t;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends