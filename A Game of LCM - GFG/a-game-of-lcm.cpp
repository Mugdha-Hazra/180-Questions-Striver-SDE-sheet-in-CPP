//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long f(int n){

      long long ans = n;

        int cnt=3;

        for(long long i=n-1;i>0;i--){

            if(cnt == 0) break;

            if(__gcd(ans,i) == 1) ans*=i,cnt--;

        }

        return ans;

  }

    long long maxGcd(int n) {

        // code here

        return max(f(n),f(n-1));

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
        cout << ob.maxGcd(N) << "\n";
    }
}
// } Driver Code Ends