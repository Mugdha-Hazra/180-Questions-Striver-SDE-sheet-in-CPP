//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
     vector<int>ans;
        for(int i=0; i<N; i++)
        {
            if(ans.size()!=0&& color[i]==color[ans.back()] && radius[ans.back()]==radius[i])
            {
                ans.pop_back();
            }
            else
            {
                
             ans.push_back(i);
            }
        }
        int x=ans.size();
        return x;
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
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends