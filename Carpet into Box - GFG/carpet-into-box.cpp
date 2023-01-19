//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        if(A>B) swap (A,B);
        if( C>D) swap (C,D);
        int count = 0;
        while(A>C or B>D){
             if(A>B) swap (A,B);
             if( B>D ) {
                 B/=2;
                count++;
             }
             else if(A>C) {
                A/=2;
                 count++;
             }
        }
        return count;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends