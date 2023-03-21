//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minimumTime(int n,int c,vector<int> &p,vector<int> &t){
        int k=INT_MAX;
        for(int i=0;i<n;i++)
        {
            k=min(k,abs(p[i]-c)*t[i]);
        }
        return k;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,cur;
        cin>>N>>cur;
        vector<int> pos(N),time(N);
        for(int i=0;i<N;i++){
            cin>>pos[i];
        }
        for(int i=0;i<N;i++){
            cin>>time[i];
        }
        Solution ob;
        cout<<ob.minimumTime(N,cur,pos,time)<<endl;
    }
}
// } Driver Code Ends