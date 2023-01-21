//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:

    int minVal(int num1, int num2) {

         int a = __builtin_popcount(num1), b = __builtin_popcount(num2), res = num1;

        for (int i = 0; i < 32; ++i) {

            if (a > b && ((1 << i) & num1) > 0) {

                res ^= 1 << i;

                a--;

            }

            if (a < b && ((1 << i) & num1) == 0) {

                res ^= 1 << i;

                a++;

            }

        }

        return res;

    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends