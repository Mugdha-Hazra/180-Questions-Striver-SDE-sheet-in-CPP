//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define m 1000000007
class Solution {
	public:
	int dp[10001];
	int solve(string s,int i,int n){
	    if(s[i]=='0') return 0;
	    if(i==n) return 1;
	    if(dp[i]!=-1) return dp[i];
	    int ans = solve(s,i+1,n)%m;
	    if(i<=n-2 && stoi(s.substr(i,2))<=26) ans+=solve(s,i+2,n)%m;
	    return dp[i]=ans%m;
	}
		int CountWays(string str){
		    int n = str.size();
		    memset(dp,-1,sizeof(dp));
		    return solve(str,0,n);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends