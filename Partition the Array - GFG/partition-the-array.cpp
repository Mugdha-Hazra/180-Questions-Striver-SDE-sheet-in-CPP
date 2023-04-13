//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
     pair<long long  ,long long > cal(vector<long long >&ps , int l ,int r )
     {
         
          long long  ls ,rs ,mas, mis=0 ;
          if(l==0)
          {
              mas = ps[r] ; 
          }
          else
          {
              mas = ps[r]-ps[l-1] ;
          }
          int ll =l ,rr =r ;
        while(l<=r)
        {
            int mid = (l+r)/2; 
            if(ll==0)
            ls = ps[mid] ;
            else
            ls = ps[mid]-ps[ll-1] ; 
            rs = ps[rr]-ps[mid] ;
            
            if(abs(rs-ls)<mas-mis )
            {
                mis  = min(ls, rs ) ;
                mas = max(ls,rs ); 
            }
            if(ls<rs)
            {
                l =mid+1 ;
            }
            else
            r=mid-1 ;
        }
         
        //  cout << mis << " " << mas << endl;
         return {mis, mas }; 
          
         
     }



    long long minDifference(int N, vector<int> &A) {
        // code here
     vector<long long >presum(N, 0 ) ;
     
     presum[0] =A[0] ;
    for(int i =1 ; i<N ;i++ )
    {
        presum[i] =presum[i-1]+A[i] ; 
    }
        
    long long  ans = presum[N-1]; 
    
    for(int i =1 ;i<N-2 ;i++ )
    {
          pair<long long  , long long  >a = cal(presum, 0, i ) ; 
          pair<long long  , long long  > b = cal(presum ,i+1 , N-1 ); 
          ans = min(ans,  max(a.second ,b.second) - min(a.first , b.first)) ;
    }
        return ans ;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        long long ans = ob.minDifference(N, A);
        cout<<ans<<endl;
    }
    return 0;
} 
// } Driver Code Ends