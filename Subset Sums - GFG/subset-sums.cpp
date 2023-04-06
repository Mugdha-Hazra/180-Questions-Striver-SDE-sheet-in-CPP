// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int > v;
    void solve(int s,int i,int n,vector<int> a)
    {   if(i==n)
        {
            v.push_back(s);
            return ;
        }
    solve(s+a[i],i+1,n,a);
    solve(s,i+1,n,a);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        solve(0,0,N,arr);
        sort(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends