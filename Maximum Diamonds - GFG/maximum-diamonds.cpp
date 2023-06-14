//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
   long long maxDiamonds(int A[], int N, int K) {
        priority_queue<int>pq;
        for(long long i=0;i<N;i++){
            pq.push(A[i]);
        }
        long long ans=0;
        while(K--){
            long long maxi=pq.top();
            pq.pop();
            ans+=maxi;
            pq.push(maxi/2);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends