//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    // return s.find(x);
    // return -1;
    int count=0,index=0,i,j,ocur=0;
    if(x.size()>s.size())
        return -1;
    if(x.size()<=0)
        return -1;
    for(i=0;i<s.size();i++)
    {
        index=i;
        if(s[i]==x[0])
        {
        for(j=0;j<x.size();j++)
                if(s[i+j]==x[j])
                    count++;
        if(count==j)
            return index;
        count=0;}
    }
    return -1;
}