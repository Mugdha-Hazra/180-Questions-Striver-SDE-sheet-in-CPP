//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
   long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // counting sides that can make a rectancle 
        // we can count a pair of same  sized sticks as 1 

        int count = 0;
        long long ans = 0;
        
        // if count comes out to be odd we will remove the smallest pair
        int smallest = INT_MAX;
        
        for(int i = 0; i < N ; i++)
        {
           // if we have odd no of sticks make them even
            if(B[i]%2 != 0)
            {
                B[i]--;
            }
            
            // make pairs  
            B[i] /= 2;
            
            if(B[i] > 0)
            {
                count += B[i];
                ans += (B[i] * A[i]*2);
                smallest = min(smallest,A[i]);
            }
        }
        
        if(count%2 != 0)
        {
            ans -= (smallest*2);
        }
        
        // without 2 pairs we cant form rectangle
        if(count < 2)
        {
            return 0;
        }
        
        return ans;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends