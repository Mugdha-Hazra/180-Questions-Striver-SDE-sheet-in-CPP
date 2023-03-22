//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    void stcount(stack<char> &s,string S,char i,long long &c){
        if((s.top()==S[0] && i==S[1])){
            s.pop();
            ++c;
        }
        else{
            if(i=='r'||i=='p')s.push(i);
            else s.push('o');
        }
    }
    void checker(string S,string ss,long long &c){
      stack<char>s;
      for(auto i : S){
          if(s.empty()){
            if(i=='r' || i=='p')s.push(i);
            else s.push('o');
          }
          else{
              stcount(s,ss,i,c);
          }
      }
    }
    long long solve(int X,int Y,string S){
      stack<char>s;
      long long c=0,k=0;
      for(auto i : S){
          if(s.empty()){
              if(i=='r' || i=='p')s.push(i);
              else s.push('o');
          }
          else if(X>Y) stcount(s,"pr",i,c);
          else stcount(s,"rp",i,k);
      }
      string ss="";
      while(!s.empty()){
          ss+=(s.top());
          s.pop();
      }
      if(X>Y)checker(ss,"pr",k);
      else checker(ss,"rp",c);
      return ((c*X)+(k*Y));
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends