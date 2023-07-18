//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
            // Code here
            int n=str.length();
             int LCS[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    LCS[i][j]=0;
                }
                else if(str[i-1]==str[j-1] && i!=j){
                    LCS[i][j]=LCS[i-1][j-1]+1;
                }
                else{
                    LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
                }
            }
        }
        return LCS[n][n];
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
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends