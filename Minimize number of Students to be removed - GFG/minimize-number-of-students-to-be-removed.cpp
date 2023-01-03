//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int H[], int N) {
        vector<int> dp;
        dp.push_back(H[0]);
        for(int i = 1; i < N; i++){
            if(dp.back() < H[i]){
                dp.push_back(H[i]);
            }
            else{
                auto it = lower_bound(dp.begin(), dp.end(), H[i]) - dp.begin();
                dp[it] = H[i];
            }
        }
        return N - dp.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends