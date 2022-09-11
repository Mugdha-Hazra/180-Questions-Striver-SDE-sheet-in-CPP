class Solution {
public:
     struct comp
{
    bool operator()(pair<int,int>&p1,pair<int,int>&p2)
    {
        return p1.second>p2.second;
    }
};
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
      vector<pair<int,int>> v1; int mod = 1e9+7;
        for(int i = 0; i < n ;i++)
            v1.push_back({speed[i],efficiency[i]});
        sort(v1.begin(),v1.end(),comp());
        priority_queue<int,vector<int>,greater<int>> pq;
        
       long long int sum=0; long long int ans=0;
        for(int i=0;i<n;i++)
        {   if(pq.size() < k || pq.top() < v1[i].first)
              {
                    sum=sum+v1[i].first;
                  pq.push(v1[i].first);
                
              
                   if(pq.size() > k )
                   {
                       sum-=pq.top();
                    pq.pop();
                   }
             
             ans=max(ans,sum*v1[i].second);
            
            
        }
        }
        return ans%mod;
    }
};