//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

#include<bits/stdc++.h>
class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int i=0,j=0,k=0;
        int sum1 = accumulate(S1.begin(),S1.end(),0);
        int sum2 = accumulate(S2.begin(),S2.end(),0);
        int sum3 = accumulate(S3.begin(),S3.end(),0);
        int sum = min(sum1,min(sum3,sum2));
        while(i<N1 and j <N2 and k<N3){
            if(sum1>sum){
                sum1-=S1[i++];
                sum=min(sum,sum1);
            }
            if(sum2>sum){
                sum2-=S2[j++];
                sum=min(sum,sum2);
            }
             if(sum3>sum){
                sum3-=S3[k++];
                sum=min(sum,sum3);
            }
            if(sum==sum1 and sum==sum2 and sum==sum3)return sum;
            
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends