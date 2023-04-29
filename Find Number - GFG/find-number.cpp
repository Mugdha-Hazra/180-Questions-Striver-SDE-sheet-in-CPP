//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long findNumber(long long n){
        long long ans = 0;
        vector<int> base5;
        while(n > 0) {
            n--, base5.push_back(n%5);
            n /= 5;
        }
        for(int i = base5.size()-1; i >= 0; i--) {
            ans = ans*10 + 2*base5[i] + 1;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends