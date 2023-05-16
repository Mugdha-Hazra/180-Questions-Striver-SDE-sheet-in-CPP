//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define ll long long
class Solution{
    public:
    int cuts(string s){
        ll meow=1,temp=1,ans;
        map<string,bool> p; 
        while(temp<100000000000000000){
            meow=temp, temp*=5;
            string s;
            while(meow) s.push_back('0'+(meow&1)), meow/=2;
            reverse(s.begin(),s.end());
            p[s]=true;
        }
        function<ll(ll,string)> least = [&](ll in, string x)->ll{
            if (in==s.size())
            {
                if (x=="") return 0;
                return p[x]?1:777;// Any large number
            }
            ll ans=777;
            x.push_back(s[in]);
            if (p[x]) ans = 1 + least(in+1,"");
            return min(ans,least(in+1,x));
        };
        ans = least(0,"");
        return ans<77?ans:-1;
    }
};


//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   string s;
   while(t--)
   {
    cin>>s;
    Solution obj;
    int res=obj.cuts(s);
    cout<<res<<endl;

   }


    return 0;
}

// } Driver Code Ends