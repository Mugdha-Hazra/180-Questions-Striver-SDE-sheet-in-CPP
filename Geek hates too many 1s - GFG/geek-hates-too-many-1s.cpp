//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) 
    {  // code here
        int temp = n; 
        int it = 0;
        int count = 0;
        for(int i = 31; i >= 0; i--){
            int temp = 1 << i;
            if((n & temp) != 0){
                count++;
            }else{
                count = 0;
            }
            if(count == 3){
                n = n ^ temp;
                count = 0;
            }
        }
        return n;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends