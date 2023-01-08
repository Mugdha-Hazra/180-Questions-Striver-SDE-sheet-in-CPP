//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {

  public:

    long long countPairs(int n, int arr[], int k){

        // code here

     unordered_map<int,int> map;     

     int res=0;

     

     for(int i=0;i<n;++i){

          if(map.find(arr[i]%k)!=map.end()){

            res+=map[arr[i]%k];  

          }

          map[arr[i]%k]++; 

      }

     return res;

    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends