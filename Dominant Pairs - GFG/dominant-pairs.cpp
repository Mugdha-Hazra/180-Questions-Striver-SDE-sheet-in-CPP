//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        int counter = 0;
        int k =n/2;
        sort(arr.begin(),arr.begin()+k);
        sort(arr.begin()+k,arr.end());
        
        int i =0,j=n/2;
        while(i<k && j<n){
            if(arr[i]>=arr[j]*5){
                counter+=k-i;
                j++;
              
            }
            else{
                i++;
            }
        }
        return counter;
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
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends