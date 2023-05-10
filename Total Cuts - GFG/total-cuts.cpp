//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int n,int k,vector<int> &a){
        // Code here
     int arr1[n];
        int arr2[n];
        int lar = INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>lar){
                lar = a[i];
            }
            arr1[i]=lar;
        }
        int mina=INT_MAX;
          for(int i= n-1;i>=0;i--){
            mina = min(a[i],mina);
            arr2[i]=mina;
        }
        int ans = 0;
        for(int i=1;i<n;i++){
            if(arr1[i-1]+arr2[i]>=k){
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends