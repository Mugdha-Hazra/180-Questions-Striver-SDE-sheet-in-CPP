//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int arrayOperations(int n, vector<int> &arr) {
       
        int ans=0;
        bool check=false;
        int i=0;
        while(i<n){
           if(arr[i]!=0){
               ans++;
               while(arr[i]!=0){
                   i++;
               }
           }
           else{
               check=true;
               i++;}
        }
        if(check==true)
            return ans;
       else
            return -1;
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
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends