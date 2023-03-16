//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
     string secondSmallest(int S, int D){
        // code here 
        if(S==1||D==1||S>=D*9) return "-1";
        string s(D,'0');
        int l=S,j=D-1;
        while(l>0){
            int k=min(l,9);
            l-=k;
            s[j]=('0'+k);
            j--;
        }
        if(j==-1){
            s[0]+=1;
            s[1]-=1;
            return s;
        }
        s[0]='1';
        s[j+1]-=1;
        j=D-2;
        while((s[j]-'0')==9) j--;
        s[j]+=1;
        s[j+1]-=1;
        return s;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends