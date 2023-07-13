//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution

{

    public:

    bool isFrequencyUnique(int n, int arr[])

    {

        unordered_map<int,int>mp;

        vector<int>v;

        for(int i=0;i<n;i++){

            mp[arr[i]]++;

        }

        for(int i=0;i<n;i++){

            if(mp[arr[i]]>=1){

             v.push_back(mp[arr[i]]);

             mp[arr[i]]=0;

            }

        }

        unordered_map<int,int>pm;

        for(int i=0;i<v.size();i++){

            pm[v[i]]++;

            if(pm[v[i]]>1) return false;

        }

       

return true;

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
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends