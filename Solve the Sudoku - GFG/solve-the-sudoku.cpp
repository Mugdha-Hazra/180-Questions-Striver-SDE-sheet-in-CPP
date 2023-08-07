//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool isPossible(int grid[N][N], int curr_row,int curr_col,int val){
        for(int i= 0; i < N; i++){
            if(grid[curr_row][i] == val)return false; 
            if(grid[i][curr_col] == val)return false; 
        }
        
        for(int i = 0;i< N; i++){
            if(grid[3*(curr_row/3)+i/3][3*(curr_col/3)+i%3] == val)return false; 
        }
        
        return true; 
    }
    bool SolveSudoku_helper(int grid[N][N]){
        for(int i = 0; i < N; i++){
            for(int j = 0; j< N; j++){
                if(grid[i][j] == 0){
                    for(int index = 1; index <= 9; index++){
                        if(isPossible(grid,i,j,index)){
                            grid[i][j] = index; 
                            bool nextFunCall = SolveSudoku_helper(grid);
                            if(nextFunCall){
                                return true; 
                            }
                            else{
                                 grid[i][j] = 0; 
                            }
                        }
                    }
                    if(grid[i][j] == 0)return false; 
                }
            }
        }
        return true; 
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        return SolveSudoku_helper(grid); 
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i =0; i< N; i++){
            for(int j = 0; j < N; j++){
                cout<<grid[i][j]<<" "; 
            } 
        }
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends