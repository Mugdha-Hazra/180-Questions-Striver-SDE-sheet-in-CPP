//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    string removeBrackets(string s)
{
        int i = 0;
        vector<int>brackets;
        vector<int>vis(s.size(),1);
        while(i < s.size())
        {
            if(s[i] == '(')
            {
                brackets.push_back(i);
                i++;
            }
            else if(s[i] ==')')
            {
                int ind = brackets.back();
                brackets.pop_back();
                int j = i + 1;
                while(brackets.size() && (brackets.back() == ind - 1) && (s[j] == ')') )
                {
                    vis[ind-1] = 0;
                    vis[j] = 0;
                    brackets.pop_back();
                    j++;
                    ind--;
                }
                i = j;
            }
            else i++;
        }

        string temp;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(vis[i])
            {
                temp.push_back(s[i]);
            }
        }

        s = temp;

        
        int n=s.size();
        int ans[n+1];
        memset(ans,1,sizeof(ans));
        int lasta[n+1];
        int nxta[n+1];


        int l=-1;
        for(int i=0;i<n;i++){
            lasta[i]=l;
            if(s[i]=='*'||s[i]=='+'||s[i]=='-'||s[i]=='/')
                    l=s[i];
            if(s[i] =='(')
                l = -1;
        }
        l=-1;
        for(int i=n-1;i>=0;i--){
            nxta[i]=l;
            if(s[i]=='*'||s[i]=='+'||s[i]=='-'||s[i]=='/')
                    l=s[i];
            if(s[i] ==')')
                l = -1;
        }


        stack<int> st;
        int mp[256]={0};
        vector<vector<int>>sign(256);
        for(int i = 0 ; i < 256 ; i++)
        {
            sign[i].push_back(-1);
        }
        vector<char> operand={'*','+','-','/'};

        for(int p=0;p<s.size();p++)
        {
            for(auto j:operand){
                mp[j]=0;
                if(j==s[p])
                    sign[j].push_back(p);
            }
            if(s[p]=='(')
                st.push(p);

            else if(s[p]==')'){
                int i=st.top();
                int j=p;

                int nxt=nxta[j];
                int last=lasta[i];
                st.pop();
                for(auto e:operand){
                    if(sign[e].back()>=i){
                        if(sign[e].size() > 1)
                        {
                            sign[e].pop_back();
                        }
                        mp[e] = 1;
                    }
                }
                int ok=0;
                
                if(mp['+']==0&&mp['*']==0&&mp['-']==0&&mp['/']==0)
                    ok=1;
               
                if(last=='/'){
                    ok = 0;
                }
                
                if(last==-1&&nxt==-1)
                    ok=1;
                else if((char)(last) != '+' && (mp['+'] == 1 || mp['-'] == 1))
                {
                    ok = 0;
                }
                else if(((char)(nxt) == '/' || (char)(nxt) == '*') && (mp['+'] == 1 || mp['-'] == 1))
                {
                    ok = 0;
                }          
                else if((char)(last) == '*' && mp['+'] == 0 && mp['-'] == 0)
                {
                    ok = 1;
                }
                else if((char)(nxt) == '*' && mp['+'] == 0 && mp['-'] == 0)
                {
                    ok = 1;
                }
                else{
                    if((last==-1||last=='+'||last=='-')&&(nxt==-1||nxt=='+'||nxt=='-'))
                        ok=1;
                }
                if(ok==1){
                    ans[i]=0;
                    ans[j]=0;
                }
                               
            }
        }
        string res="";
        for(int i=0;i<n;i++){
            if(ans[i]){
                res.push_back(s[i]);
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
        string Exp;
        cin >> Exp;
        
        Solution ob;
        cout << ob.removeBrackets(Exp) << endl;
    }
    return 0; 
} 

// } Driver Code Ends