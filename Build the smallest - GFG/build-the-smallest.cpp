//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    stack<char> s;
    for(int i = 0;i<num.size();i++){
        if(s.empty()){
            s.push(num[i]);
        }
        else{
            while(!s.empty() and k and s.top()>num[i]){
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
    }
    while(k){
        s.pop();
        k--;
    }
    string ans = "";
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    while(!ans.empty() and ans.back()=='0'){
        ans.pop_back();
    }
    if(ans.size()==0){
        return "0";
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
// // 143729
//   654321
//   --------
//   79710410
   
//   10056
//   54321
//   -----
//   64377