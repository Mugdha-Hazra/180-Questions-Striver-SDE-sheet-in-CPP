//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        string ans = "";
        if((N>1 && S==0) || N*9 < S) {
            ans += "-1";
            return ans;
        }
        
        for(int i=0; i<N; i++) {
            int maxDigit = S>=9 ? 9 : S;
            ans.push_back(maxDigit+'0');
            S -= maxDigit;
        }
            
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends