//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> m, int N) {
        //code here
        int c=0,k=0,r=0;
        for(int i=0;i<m.size();i++)
        {  c=0;
            for(int j=0;j<m[0].size();j++)
            {
                if(m[i][j]==1)
                c++;
            }
            if(c>r)
            {
                r=c;
                k=i;
            }
        }
        return {k,r};
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends