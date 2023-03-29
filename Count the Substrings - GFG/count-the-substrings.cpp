//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S) {
    int count = 0;
    unordered_map<int, int> map;
    map[0] = 1;
    int diff = 0;
    for (int i = 0; i < S.length(); i++) {
        char c = S[i];
        diff += isupper(c) ? 1 : -1;
        if (map.count(diff)) {
            count += map[diff];
        }
        map[diff]++;
    }
    return count;
}
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends