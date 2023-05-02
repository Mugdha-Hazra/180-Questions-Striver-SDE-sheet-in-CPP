//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
   bool solve(vector<int>&v , int target , int k ){
        int freq = 0;
        int sum = 0;
        int n = v.size(); 
        int i;
        for(i=0; i<n; i++){
            if(sum >= target){
                freq++;
                // cout<<sum<<"* ";
                sum = 0;
            }
            sum += v[i];
        }
        // cout<<endl;
        if(sum >= target)freq++;
        return freq >= k;
    }
    int maxSweetness(vector<int>& sweetness, int N, int K) {
        //we can solve this problem using binary search because here the ans space is large and that 
        // ans space we will use as the binary search space 
        int l = 1 , r = 1e9;
        int ans = 0;
        while( r >= l){
            int mid = (l + r)/2;
            if(solve(sweetness , mid , K+1)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid -1;
            }
        }
        return ans;
    // Write your code here.
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends