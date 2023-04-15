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
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        int ans=-1;
        // map<int,vector<int>>m;
        map<int,int>m1;
        for(int i=0;i<arr.size();i++){
            m1[arr[i]]++;
            if(m1[arr[i]]>1){
                ans+=time[arr[i]-1];
            }else{
                ans++;
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
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        
        vector<int> time(n);
        Array::input(time,n);
        
        Solution obj;
        int res = obj.totalTime(n, arr, time);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends