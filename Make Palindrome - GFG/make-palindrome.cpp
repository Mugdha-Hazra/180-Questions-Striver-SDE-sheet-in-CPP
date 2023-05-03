//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        unordered_map<string,int> mp;
        int count=0;
        for(int i=0;i<n;i++){
            string s=arr[i];
            reverse(arr[i].begin(),arr[i].end());
            if(mp.find(arr[i])!=mp.end())
                mp[arr[i]]--;
            else
                mp[s]++;
        }
        for(auto x:mp){
            string t="";
            if(x.second%2!=0){
                t=x.first;
            if(!equal(t.begin(), t.begin() + t.size()/2, t.rbegin()))
                return false;
                 count++;
            }
        }
        if(count%2==0 && count!=0)return false;
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends