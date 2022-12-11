//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   bool canPair(vector<int> nums, int k) {
        vector<int> temp;
        int cnt = 0;
        
        for(auto i:nums)
            if(i%k == 0)cnt++;
            else temp.push_back(i%k);
        
        if(cnt%2!=0)return false;
        sort(temp.begin(), temp.end());
        int start = 0, end = temp.size()-1;
        while(start <= end){
            if(temp[start] + temp[end] == k)
                start++, end--;
            else
                return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends