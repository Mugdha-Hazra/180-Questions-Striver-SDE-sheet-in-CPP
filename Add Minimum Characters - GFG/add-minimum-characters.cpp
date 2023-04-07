//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str) {
        int len = str.length();
        int start = 0, end = len - 1;
        int res = 0;
        
        while(start < end) {
            
            if(str[start] == str[end]) start++, 
                                       end--;
            
            else {
                res++;
                start = 0;
                end = len - res - 1;
            }
            
        }
        
        return res;
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends