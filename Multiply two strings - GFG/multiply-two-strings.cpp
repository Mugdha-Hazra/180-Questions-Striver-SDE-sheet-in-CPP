//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends

class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       int fl=0;
       if(s1[0]=='-' && s2[0]=='-'){s1.erase(0, 1),s2.erase(0,1);}
       else if(s1[0]=='-' && s2[0]!='-'){fl=1;s1.erase(0,1);}
       else if(s2[0]=='-' && s1[0]!='-'){fl=1;s2.erase(0,1);}
       int n=s1.size();
       int m=s2.size();
       vector<int> vis(n+m+22,0);
       int index=n+m+22;
       index--;
       int hj=index;
       for(int i=m-1;i>=0;i--){
           int x=s2[i] - '0';
           for(int j=n-1;j>=0;j--){
               int y=s1[j]-'0';
               vis[index]+=x*y;
              if(vis[index]>9){
                  vis[index-1]+=vis[index]/10;
                  vis[index] = vis[index]%10;
              }
               index--;
           }
           hj--;
           index=hj;
       }
       string ans="";
       int found=0;
       if(fl==1) ans='-'+ans;
       for(int i=0;i<n+m+22;i++){
           if(vis[i]) found=1;
           if(found) ans+=(char)(vis[i]+'0');
       }
       return ans;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends