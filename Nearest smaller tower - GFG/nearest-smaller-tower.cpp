//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        stack<pair<int, int>> st;
        int n = arr.size();
        vector<int> ans(n);
        
        //right smaller
        for(int i = n-1; i >= 0; i--){
            
            while(!st.empty() && arr[i] <= st.top().first){
                st.pop();
            }
            if(!st.empty() && arr[i] > st.top().first){
                ans[i] = st.top().second;
            }
            if(st.empty()){
                ans[i] = -1;
            }
            st.push({arr[i],i});
        }
        
        // left smaller
        while(!st.empty()) st.pop();
        
        vector<int> left(n);
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[i] <= st.top().first){
                st.pop();
            }
            if(!st.empty() && arr[i] > st.top().first){
                left[i] = st.top().second;
            }
            if(st.empty()){
                left[i] = -1;
            }
            st.push({arr[i], i});
        }
        for(int i = 0; i < n; i++){
            if(left[i] != -1 && ans[i] != -1){
                int lDist = abs(i-left[i]);
                int rDist = abs(i- ans[i]);
                
                //if same dist then ans would be smallest number index
                if(lDist == rDist){
                    if(arr[left[i]] <= arr[ans[i]]){
                        ans[i] = left[i];
                    }
                }
                else if(lDist < rDist){
                    ans[i] = left[i];
                }
                
            }
            else{
                ans[i] = max(ans[i], left[i]);
            }
        }
        return ans;
        
        
        
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends