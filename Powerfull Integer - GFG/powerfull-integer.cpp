//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        int mx=INT_MIN;
        
      for( auto it: intervals ) mx=max(mx,it[1]);
      
      vector<int> mp(mx+2,0);
      
      for(auto it:intervals){
          int start=it[0];
          int end=it[1]+1;
          mp[start]++;
          mp[end]--;
      }
       
      
      int ans=-1;
      for(int i=0;i<mx+2;i++){
          mp[i]=mp[i-1]+mp[i];
          if(mp[i] >=k ) ans=max(ans,i);
      }
      return ans;
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends