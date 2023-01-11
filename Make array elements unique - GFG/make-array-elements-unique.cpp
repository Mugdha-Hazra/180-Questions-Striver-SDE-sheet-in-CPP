//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {

        // Code here

        sort(arr.begin(),arr.end() );

        long long cnt=0;

        for(int i=1;i<N ;i++)

        {

            if(arr[i-1]<arr[i]) continue;

            cnt+= arr[i-1]+1-arr[i];

            arr[i]= arr[i-1]+1;

        }

        return cnt;

    }
};
   


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends