//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
    public:
    string removeReverse(string S) {
        
    int i=0,j=S.length()-1;
    int map[26]; 
    fill(map, map+26, 0);
    bool flag=true;
    int cnt=0;

    for(char ch:S) map[ch-'a']++;


    string begin="",end="";

    while(i<=j) {
        char ch;
        if(flag) ch=S[i++];
        else ch=S[j--];

        if(map[ch-'a']>1) {
            map[ch-'a']--;
            cnt++;
            flag=!flag;
        }
        else {
            if(flag) begin+=ch;
            else end=ch+end;
        }
    }
    
    
    string ans=begin+end;
    if(cnt%2==1) reverse(ans.begin(), ans.end());

    return ans;
}
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends