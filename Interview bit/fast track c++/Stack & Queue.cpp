/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
*/

// Complete the given function
vector<int> solve(vector<int> &num, int k)
{
     vector<int> ans;
        deque<int> dq;
        
        for(int i=0;i<num.size();i++)
        {
            if(!dq.empty() && dq.front() == (i-k))//to remove out of bound
            {
                dq.pop_front();
            }
            
            while(!dq.empty() && num[dq.back()] < num[i])
            {
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            if(i >= k-1)
            {
                ans.push_back(num[dq.front()]);
            }
        }
        return ans;
    
}


/*
int main()  {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i = 0; i < n; i++){
            cin>>A[i];
        }
        int B;
        cin>>B;
        vector<int> ans = solve(A, B);
        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
