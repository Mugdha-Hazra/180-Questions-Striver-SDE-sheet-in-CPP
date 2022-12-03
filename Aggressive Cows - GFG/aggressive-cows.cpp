//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int canPlaceCow(int n, int k, vector<int> &a,int m){
        int c=a[0],h=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]-c>=m)
            {
                h++;
                c=a[i];
            }
            if(h==k) return 1;
        }
        return 0;
    }
    int solve(int n, int k, vector<int> &a) {
        sort(a.begin(),a.end());
        int l=0,h=a[n-1]-a[0],m=0,v=0;
        while(l<=h)
        {
            m=(l+h)/2;
            if(canPlaceCow(n,k,a,m)==1)
            {   v=m;
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends