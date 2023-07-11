//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
     int findK(int a[MAX][MAX],int n,int m,int k)
    {
        int colstart = 0;
        int rowstart = 0;
        int colend = m-1;
        int rowend = n-1;
    
        int count = 0;
        
        while(count!=k){
            
            for(int i = colstart;i<=colend;i++){
                count++;
                if(count==k){
                    return a[rowstart][i];
                }
            }
            rowstart++;
            
            for(int i = rowstart;i<=rowend;i++){
                count++;
                     if(count==k){
                    return a[i][colend];
                }
            }
            
            colend--;
            
            for(int i = colend;i>=colstart;i--){
                count++;
                
                 if(count==k){
                    return a[rowend][i];
                }
                
            }
            
            rowend--;
            
                for(int i = rowend;i>=rowstart;i--){
                count++;
                 if(count==k){
                    return a[i][colstart];
                }    
            }
            colstart++; 
        }
        
        return 0;
 		
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends