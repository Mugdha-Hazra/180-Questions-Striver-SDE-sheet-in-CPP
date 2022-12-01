//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    void rearrange(long long *a, int n) 
    { 
        int mini=0,maxi=n-1,m=a[n-1]+1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
               a[i]=a[i]+(a[maxi]%m)*m;
               maxi--;
            }
            else{
                a[i]=a[i]+(a[mini]%m)*m;
                mini++;
            }
        }
        for(int i=0;i<n;i++)
        {
            a[i]/=m;
        }
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends