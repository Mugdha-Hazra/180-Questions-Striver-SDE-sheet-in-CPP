//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
vector<int> findSubarray(int a[], int n) {

     int tempstart=-1,start,end,sum=0,maxsum=0,f=0;

     vector<int>ans;

     for(int i=0;i<n;i++){

         if(a[i]>=0){

             sum+=a[i];

             if(i!=n-1) maxsum=max(sum,maxsum);

             if(tempstart==-1) tempstart=i;

             f=1;

         }

         else if(a[i]<0 && tempstart!=-1){

             if(sum>=maxsum){

                 start=tempstart;

                 end=i-1;

             }

             sum=0;

             tempstart=-1;

         }

     }

     if(f==0) return {-1};

     if(sum>maxsum){

         start=tempstart;

         end=n-1;

     }

     for(int i=start;i<=end;i++)

         ans.push_back(a[i]);

     return ans;

}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends