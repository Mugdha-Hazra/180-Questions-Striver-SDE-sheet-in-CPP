//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
   int row[4]={0,1,0,-1};

int col[4]={1,0,-1,0};

void dfs( vector<vector<bool>>&mat1, vector<vector<int>>&mat,int N,int M,int i,int j){

    mat1[i][j]=1;

    for(int k=0;k<4;k++){

        int r=row[k]+i;

        int c=col[k]+j;

        if(r>=0 && c>=0 && r<N && c<M && mat[r][c]>=mat[i][j] && mat1[r][c]==false){

            dfs(mat1,mat,N,M,r,c);

        }

    }

}

int water_flow(vector<vector<int>>&mat,int N,int M){

         vector<vector<bool>>mat1(N,vector<bool>(M,false));

         vector<vector<bool>>mat2(N,vector<bool>(M,0));

         for(int i=0;i<N;i++){

             for(int j=0;j<M;j++){

                 if(i==0 && mat1[i][j]==false){

                 dfs(mat1,mat,N,M,i,j);

                 }

                 if(j==0 && mat1[i][j]==false){

                 dfs(mat1,mat,N,M,i,j);

                 }

                 

             }

         }

         

         

            for(int i=0;i<N;i++){

             for(int j=0;j<M;j++){

                 if(i==N-1){

                     if(mat2[i][j]==false){

                     dfs(mat2,mat,N,M,i,j);

                 }

                 }

                 if(j==M-1){

                             if(mat2[i][j]==false){

                     dfs(mat2,mat,N,M,i,j);

                 }

                 }

             }

         }

         int cnt=0;

        for(int i=0;i<N;i++){

            for(int j=0;j<M;j++){

                if(mat1[i][j]!=0 && mat2[i][j]!=0){

                    cnt++;

                }

            }

        }

      

        return cnt;

}
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends