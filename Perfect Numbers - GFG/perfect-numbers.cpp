//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum = 0 ;
        
        if(N==1){
            return 0;
        }
        for(int i = 1  ; i<=sqrt(N); i++)
        {
            if(N%i==0){
                sum = sum+i;
            if(i*i!=N && N/i!=N){
                 
                 sum=sum+N/i;
                
             }
            }
        }
        if(sum==N)
        {
            return 1;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends