//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        sort(arr.begin(),arr.end());
        int m=arr[n-1];
         
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])!=mp.end()){
                ans+=mp[arr[i]]+1;
                if(mp[arr[i]]==1){
                    mp[arr[i]]=0;
                }
                continue;
            }
            mp[arr[i]]=1;
            for(int x=arr[i]*2;x<=m;x+=arr[i]){
                mp[x]=0;
            }
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
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends