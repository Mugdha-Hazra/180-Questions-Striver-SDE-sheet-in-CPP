//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            queue<int>neg;
            queue<int>pos;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                    neg.push(arr[i]);
                else
                    pos.push(arr[i]);
            }
            int i=0;
            while(!neg.empty())
            {
                arr[i]=neg.front();
                neg.pop();
                i++;
            }
            while(!pos.empty())
            {
                arr[i]=pos.front();
                pos.pop();
                i++;
            }
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends