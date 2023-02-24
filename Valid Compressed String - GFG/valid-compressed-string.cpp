//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        int len = 0;
        int curNum = 0;
        for(int i=0; i<T.length(); i++){
            if(T[i] <= '9' && T[i] >= '0'){
                curNum *= 10;
                curNum += (T[i] - '0');
            }
            else{
                len += curNum;
                curNum = 0;
                if(len > S.length())
                    return 0;
                if(S[len] != T[i])
                    return 0;
                len++;
            }
        }
        
        if(curNum + len == S.length())
            return 1;
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends