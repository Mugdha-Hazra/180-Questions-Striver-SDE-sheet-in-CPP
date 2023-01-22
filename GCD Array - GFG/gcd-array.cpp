//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int solve(int N, int K, vector<int> &arr) {
        // code here
        int sum=0;
        vector<int>pre(N,0);
        for(int i=0;i<N;i++){
            sum+=arr[i];
            pre[i]=sum;
        }
        vector<int>divisors;
        for(int i=1;i*i<=sum;i++){
            if(sum%i==0){
                divisors.push_back(i);
                if(i!=sum/i){
                    divisors.push_back(sum/i);
                }
           }
        }
        int ans=1;
        for(auto d:divisors){
            int partions=0;
            for(int i=0;i<N;i++){
                if(pre[i]%d==0){
                    partions++;
                }
                if(partions>=K){
                    ans=max(ans,d);
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.solve(N, K, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends