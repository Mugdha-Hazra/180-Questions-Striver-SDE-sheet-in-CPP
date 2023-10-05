//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int solve(string s, int k) {
    int n = s.size();
        
        long long int c = 0;
        int j = 0, sz = 0;
        vector<int>mp(26, 0);
        
        for(int i=0; i<n; i++)
        {
            int ind = s[i]-'a';
            if(mp[ind] == 0) sz++;
            mp[ind]++;
            
            while(j <= i && sz > k)
            {
                mp[s[j]-'a']--;
                if(!mp[s[j]-'a']) sz--;
                j++;
            }
            if(j <= i) c += (i-j+1);
        }
        return c;
    }
  
    long long int substrCount (string s, int k) {
        return solve(s, k) - solve(s, k-1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends