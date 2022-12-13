//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
      int max=INT_MIN,sum=0;
        for(int i=0;i<N;i++) {
            if(arr[i]>max) {
                max=arr[i];
            }
            sum+=arr[i];
        }
        int ans,l=max,h=sum,mid;
        while(l<=h) {
            mid=(l+h)/2;
            int ctr=1,s=0;
            for(int i=0;i<N;i++) {
                s+=arr[i];
                if(s>mid) {
                    ctr++;
                    s=arr[i];
                }
            }
            if(ctr>K) {
                l=mid+1;
            }
            else {
                ans=mid;
                h=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends