//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string ans="";
    stack<string> st;
    string reverseEqn (string s)
        {
            //code here.
            int start = 0;
            for(int i=0; i<s.length(); i++){
                if(!isdigit(s[i])){
                    string sub_str = s.substr(start, i-start);
                    st.push(sub_str);
                    st.push(string(1, s[i]));
                    start = i+1;
                }
            }
            st.push(s.substr(start, s.length()-start));
            while(!st.empty()){
                ans += st.top();
                st.pop();
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends