//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
 long long int wineSelling(vector<int>& Arr, int N){

      long long ans=0;

      int neg=0,pos=0;

      

      

      while(pos<N && neg<N){

        while(Arr[neg]>=0 && neg<N)

          neg++;

        while(Arr[pos]<=0 && pos<N)

          pos++;

        if(Arr[pos]>0 && Arr[neg]<0){

          if(abs(Arr[neg])>=Arr[pos]){

              

              int diff=abs(neg-pos);

              ans+=(diff*Arr[pos]);

              

              Arr[neg]+=Arr[pos];

              Arr[pos]=0;

              

          }else{

              

              int diff=abs(neg-pos);

              ans+=(diff*abs(Arr[neg]));

              

              

              Arr[pos]+=Arr[neg];

              Arr[neg]=0;

          }

        }

        else{

            return ans;

        }

          

      }

      

      return ans;

  }
};



//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends