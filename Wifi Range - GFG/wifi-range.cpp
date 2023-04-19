//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
    // code here
        int a=0;
        for(int i=0;i<N;i++){
            
            char current = S[i];
            if(current == '0')
                a-=1;
            else
                a = X;
            if(a < (-(X))) return false;
        }
        
        if(a < 0) return false;
     
        return true;
        
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends