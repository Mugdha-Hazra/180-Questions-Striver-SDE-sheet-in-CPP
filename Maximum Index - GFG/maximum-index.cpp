//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
      vector < int > v_min(n), v_max(n);
      v_min[0] = arr[0];
      v_max[n - 1] = arr[n - 1];
      for (int i = 1; i < n; i++) {
        v_min[i] = min(v_min[i - 1], arr[i]);
        v_max[n - i - 1] = max(v_max[n - i], arr[n - i - 1]);
      }
      int ans = 0, i = 0, j = 0;
      while (i < n && j < n) {
        if (v_min[i] <= v_max[j]) {
          ans = max(ans, j - i);
          j++;
        } else i++;
      }
      return ans;
    }
  

};
// 0   1  2   3  4  5    6  7   8
// 34, 8, 10, 3, 2, 80, 30, 33, 1

// min=8
// max=33
// dist=

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends