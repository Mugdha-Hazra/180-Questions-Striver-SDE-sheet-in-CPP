//{ Driver Code Starts
//Initial Template for C


#include <stdio.h>

// } Driver Code Ends
//User function Template for C

void toBinary(int n)
{
    if(n==0) return;
    toBinary(n/2);
    printf("%d",n%2);
        
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    toBinary(n);
	    printf("\n");
	}
	return 0;
}
// } Driver Code Ends