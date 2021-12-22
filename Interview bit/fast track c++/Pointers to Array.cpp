/*
#include<iostream>
using namespace std;
*/

int main() {
    int N,n;
    cin>>N;
     n=N;
    // YOUR CODE GOES HERE
    int grid[N+1][N+1]={2};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j)
           grid[i][j]=0;
           else if(i<j)
           grid[i][j]=1;
           else
           grid[i][j]=-1;
        }
    }
    // Don't change the code below
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<grid[i][j]<<" ";
        }    
        cout<<endl;
    }
    return 0;
}
