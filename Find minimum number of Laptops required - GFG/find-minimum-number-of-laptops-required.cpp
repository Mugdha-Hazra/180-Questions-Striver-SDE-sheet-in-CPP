//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {

       vector<pair<int,int>>v(N);

       for(int i=0;i<N;i++){

           v[i]={start[i],end[i]};

       }

        sort(v.begin(),v.end());

            

        priority_queue<int,vector<int>,greater<int>>pq;

        int cnt=0;

        for(int i=0;i<N;i++){

            if(pq.size()==0)

             { pq.push(v[i].second);

               cnt++; 

             }  

            else if(pq.top()<=v[i].first)

             {

               pq.push(v[i].second);

               pq.pop();

             }

            else{

                cnt++;

                pq.push(v[i].second);

            }

        }

     return cnt;

 

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends