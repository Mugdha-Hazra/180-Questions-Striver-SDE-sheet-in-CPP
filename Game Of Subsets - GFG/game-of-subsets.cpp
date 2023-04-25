//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    unordered_map<int,int>cap;
    int mod = (int)(1e9+7);
    bool check(int n) {
        int c = 2;
        while (n > 1) {
            if (n % c == 0) {
                n/= c;
                if (n % c == 0) return false;
            } else {
                c++;
            }
            
        }
        true;
    }
    int fun(int i, vector<int>temp, vector<int>&arr) {
    if (i < 0) return 0;
    long long not_pick = fun(i-1,  temp, arr);
    long long pick = 0;
    bool flag = true;
    
    for (auto &x: temp) {
        if (arr[i] % x == 0) {
            flag = false;
            break;
        }
    }
    
    if (flag == true) {
        int val = arr[i];
        int c = 2;
        int m = 0;
        vector<int>temp2;
        bool flag2 = true;
        while (val > 1) {
            if (val % c == 0) {
                val = val / c;
                if (val % c == 0) {
                    flag2 = false;
                    break;
                }
                temp2.push_back(c);
            } else {
                c++;
            }
        }
        if (flag2 == true) {
            for (auto &x : temp2) {
                temp.push_back(x);
            }
           
            pick = (1 + fun(i-1 , temp, arr));
        }
    }
    
    
  //  cout<<arr[i]<<" "<<pick<<" "<<not_pick<<endl;
   
    long long val2 = cap[arr[i]];
    return  (val2*pick + not_pick)%mod;
}
public:
    int goodSubsets(vector<int> &arr, int n){
       int ones = 0;
        vector<int>nums;
       for (auto &x : arr) {
           if (x == 1) ones++;
           else {
            if (cap[x] == 0 && check(x)) {
                nums.push_back(x);
                //cout<<x<<endl;
            }
            cap[x]++;
           }
       }
       
       vector<int>s;
       int ans = fun(nums.size()-1, s, nums);
       cap.clear();
      
       return ans*pow(2, ones);
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.goodSubsets(a, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends