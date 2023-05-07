//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        string s="",f;
        s+=str[0];
        for(int i=1;i<str.size();i++){
            if(s[i-1]>str[i]){
                s+=str[i];
            }
            else if(s[i-1]==str[i]){
                if(s.size()==1)break;
                s+=str[i];
            }
            else break;
        }
        f+=s;
        reverse(s.begin(),s.end());
        f+=s;
        return f;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends