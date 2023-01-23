//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   string removePair(string s) {
        int i=0;

        while(i<s.size()){

            if(s[i]==s[i+1]){

                s.erase(i,2);

                i=0;

            }

            else i++;   

        }

        if(s.size()==0)s="-1";

        return s;

    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends