// class Solution {
// public:
//     int dp[1000000]={-1};
//     int f(vector<int>& v,int k, int a,int b,int s)
//     { if(k==0)
//             return dp[k]=s;
//         if(dp[k]!=-1)
//         return dp[k]=max(f(v,k-1,a+1,b,v[a]),f(v,k-1,a,b-1,v[b]))+s;
//      return dp[k];
        
//     }
//     int maxScore(vector<int>& v, int k) {
//          int a=0,b=v.size()-1,s=0;
//         // while(k>0)
//         // {
//         //     if(v[a]>v[b])
//         //         s=s+v[a++];
//         //     else
//         //         s=s+v[b--];
//         //         k--;
//         // }
        
//          s=f(v,k,a,b,s);
        
//         return s;
//     }
// };
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int frontScore = 0; 
        for (int i=0; i<k; i++)
            frontScore =frontScore+ cardPoints[i]; 
        int ans = frontScore, ind = k-1, backScore = 0; 
        for (int i=cardPoints.size()-1; i>=int(cardPoints.size())-k; i--){
            if (ind>=0)
                frontScore=frontScore- cardPoints[ind--]; 
            backScore =backScore + cardPoints[i]; 
            ans = max(ans, frontScore+backScore);
        }
        return ans;
    }
};