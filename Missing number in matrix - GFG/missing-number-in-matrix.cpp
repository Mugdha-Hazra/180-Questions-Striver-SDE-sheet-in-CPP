//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
   long long int MissingNo(vector<vector<int> >& matrix) {
        int n = matrix.size();
    	int m = matrix[0].size();
    	long long int rs = -1, rs0 = -1, cs = -1, cs0 = -1, ds1 = 0, ds2 = 0, k1d = 1, k2d = 1;
        for (int i = 0; i < n; ++i)
        {
        	long long int tc = 0, tr = 0;
        	int kc = 1, kr = 1;
        	ds1 += matrix[i][i];
        	if (matrix[i][i] == 0)
        	{
        		k1d = 0;
        	}
        	ds2 += matrix[i][n-i-1];
        	if (matrix[i][n-i-1] == 0)
        	{
        		k2d = 0;
        	}

        	for (int j = 0; j < m; ++j)
        	{
        		tc += matrix[i][j];
        		tr += matrix[j][i];
          		if (matrix[i][j] == 0)
        		{
        			kc = 0;
        		}
        		if (matrix[j][i] == 0)
        		{
        			kr = 0;
        		}
        	}

        	if (kc)
        	{
        		if (cs != -1 && cs != tc)
        		{
        			return -1;
        		}
        		cs = tc;
        	}
        	else{
        		cs0 = tc;
        	}

        	if (kr)
        	{
        		if (rs != -1 && rs != tr)
        		{
        			return -1;
        		}
        		rs = tr;
        	}
        	else{
        		rs0 = tr;
        	}
        }
        if (rs != cs)
    	{
    		return -1;
    	}
        if (k1d && k2d && ds1 != ds2)
        {
        	return -1;
        }
        // cout<<ds1<<" "<<ds2;
        if (cs0 == rs0 && ((cs - cs0) > 0))
        {
        	if ((k1d == 0 && ds1 == cs0) || (k1d != 0))
        	{
        		if ((k2d == 0 && ds2 == cs0) || (k2d != 0))
        		{
        			if ((k1d == 0 && k2d != 0 && ds1 + cs - cs0 == ds2) || (k1d != 0 && k2d == 0 && ds2 + cs - cs0 == ds1) || (k1d!=0 && k2d!=0)  || (k1d == 0 && k1d==0)) 
        			{
        				return cs - cs0;
        			}
        		}
        	}
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends