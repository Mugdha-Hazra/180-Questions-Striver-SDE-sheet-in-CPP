//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long evaluate(const string&st) {
        bool p=1;
        int n=st.size(), r;
        long long a=0, x, y;
        for(int l=0; l<n; ++l) {
            r=l;
            while(r<n && st[r]!='+' && st[r]!='-') r++;
            x=1, y=0;
            while(l<r) {
                if(st[l]=='*') {
                    x=x*y;
                    y=0;
                }
                else {
                    if(st[l]=='0' && y==0 && l+1!=r && st[l+1]!='*') return LLONG_MAX;
                    y=y*10+(st[l]-'0');
                }
                l++;
            }
            if(p) a+=x*y;
            else a-=x*y;
            p=!(r<n && st[r]=='-');
        }
        // cout<<st<<"="<<a<<'\n';
        return a;
    }
    vector<string> addOperators(string st, int t) {
        // code here
        vector<string> a;
        int n=st.size(), k=1<<((n-1)<<1);
        long long x, y;
        string s;
        for(int i=0; i<k; i++) {
            s={st[0]};
            for(int j=0; j<n-1; j++) {
                x=3&(i>>(j<<1));
                switch(x) {
                    case 0: s.push_back('+'); break;
                    case 1: s.push_back('-'); break;
                    case 2: s.push_back('*');
                }
                s.push_back(st[j+1]);
            }
            x=evaluate(s);
            if(x==t) {
                a.emplace_back(s);
            }
        }
        return a;
    }
};
  

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int target;
        string S;
        cin >> S >> target;

        Solution obj;
        vector<string> ans = obj.addOperators(S, target);
        sort(ans.begin(), ans.end());
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends