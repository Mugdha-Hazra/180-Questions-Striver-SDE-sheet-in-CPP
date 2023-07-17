//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string s){
            int ch[26]={0};
            vector<char> v;
            int pos=0;
            string a="";
            a += s[0];
            int n=s.size();
            ch[s[0]-'a']=1; v.push_back(s[0]);
            for (int i=1; i<n; i++){
                if (ch[s[i]-'a']==0) v.push_back(s[i]);
                ch[s[i]-'a'] += 1;
                while (pos<v.size() && ch[v[pos]-'a']>1) pos++;
                if (pos==v.size()) a += '#';
                else a += v[pos];
            }
            return a;
        }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends