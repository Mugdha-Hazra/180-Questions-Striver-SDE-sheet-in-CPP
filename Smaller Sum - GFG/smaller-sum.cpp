//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
  vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<int> A = arr;
        vector<long long> prefixSum{0}, ans;
        
        sort(A.begin(), A.end());
        
        for(int i=0; i<n; i++)
            prefixSum.push_back(prefixSum[i]+A[i]);
        
        for(int i=0; i<n; i++)
        {
            int p = lower_bound(A.begin(), A.end(), arr[i]) - A.begin();
            ans.push_back(prefixSum[p]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends