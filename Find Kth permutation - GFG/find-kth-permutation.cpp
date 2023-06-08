//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k){
        // code here
        vector<int> v(n, 0);
        for(int i=0;i<n;i++)    v[i] = i+1;
        k--;
        vector<int> kthP(n, 0);
        vector<int> fact(n, 1);
        
        for(int i=2;i<n;i++){
            int f = fact[i];
            fact[i] = fact[i-1] * i;
        }
        
        int i = 0;
        while(k > 0){
            int f = fact[v.size()-1];
            int ind = k/f;
            kthP[i] = v[ind];
            k %= f;
            v.erase(v.begin() + ind);
            i++;
        }
        
        int j = 0;
        while(i<n){
            kthP[i] = v[j];
            i++, j++;
        }
        
        string ans = "";
        for(int i=0;i<n;i++){
            ans += to_string(kthP[i]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends