//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& arr) {
        // Code here
        int row_sz=arr.size();
        int col_sz=arr[0].size();
        
        int xC[]={0,1,1,1,0,-1,-1,-1};
        int yC[]={1,1,0,-1,-1,-1,0,1};
        
        int noOfOnes=0;
        for(int i=0; i<row_sz; i++){
            for(int j=0; j<col_sz; j++){
                int cnt=0; 
                if(arr[i][j]==1){
                    for(int k=0; k<8; k++){
                        int _i=i+xC[k];
                        int _j=j+yC[k];
                        
                        if(_i>=0 && _i<row_sz && _j>=0 && _j<col_sz && arr[_i][_j]==0)
                            cnt++;
                    }
                }
                if(cnt>0 && cnt%2==0){
                    noOfOnes++;
                }
            }
        }
        return noOfOnes;

}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends