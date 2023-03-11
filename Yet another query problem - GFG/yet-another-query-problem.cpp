//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> A, vector<vector<int>> Q) {
        
    vector<int> ans;

    vector<vector<int>> frequency(N, vector<int>(N + 1));

    for (int i = 0; i < N; i++) {
        int cnt = 0;
        for (int j = i; j < N; j++) {
            if (A[i] == A[j]) {
                cnt++;
            }
        }
        frequency[i][cnt]++;
    }

    for (int i = 0; i < N + 1; i++) {
        for (int j = 1; j < N; j++) {
            frequency[j][i] += frequency[j - 1][i];
        }
    }

    for (int i = 0; i < num; i++) {
        int L = Q[i][0];
        int R = Q[i][1];
        int K = Q[i][2];
        ans.push_back((L == 0 ? frequency[R][K] : frequency[R][K] - frequency[L - 1][K]));
    }

    return ans;
}
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends