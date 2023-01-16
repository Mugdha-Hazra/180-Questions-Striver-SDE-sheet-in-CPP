//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {

  public:

  using ll = long long;

    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        vector<ll> sol(n);
        stack<ll> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[i] > arr[st.top()]){
                sol[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            sol[st.top()] = -1;
            st.pop();
        }
        return sol;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends