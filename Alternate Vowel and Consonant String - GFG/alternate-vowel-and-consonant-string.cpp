//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    // function to put two groups at alternate positions using their freq array
    void util(vector<int> &a,vector<int> &b, string &s)
    {
        int p=0,q=0;
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0)
            {
                while(a[p]==0)
                    p++;
                s[i]= p+'a';
                a[p]--;
            }
            else
            {
                while(b[q]==0)
                    q++;
                s[i] = q+'a';
                b[q]--;
            }
        }
    }
    public:
    string rearrange (string S, int N)
    {   vector<int> v_freq(26,0) , c_freq(26,0);
        int v_count=0;
        for(auto x:S)
        {
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            {
                v_count++;
                v_freq[x-'a']++;
            }
            else
                c_freq[x-'a']++;
        }
        int c_count = N - v_count;
        
        // not possible put at alternate positions
        if(abs(v_count - c_count)>1)
        return "-1";
    
        // if count of vowels if greater we start with them
        if(v_count > c_count)
            util(v_freq , c_freq , S);
        
        // if count of consonants is greater we start with them
        else if(v_count < c_count)
            util(c_freq , v_freq , S);
        
        else // when both counts are equal
        {
            for(int i=0;i<26;i++)
            {
                if(c_freq[i]>0) // we get the character which occurs first
                {
                    util(c_freq , v_freq , S);
                    break;
                }
                if(v_freq[i]>0) // and start with that group
                {
                    util(v_freq , c_freq , S);
                    break;
                }
            }
        }
        return S;
    }
    // T.C. O(N)
    // A.S. O(1) As we are modifying the given string only
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends