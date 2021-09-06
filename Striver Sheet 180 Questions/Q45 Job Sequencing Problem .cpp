bool comp(Job j1,Job j2)
{
    
    return (j1.profit>j2.profit);
}

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
     vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        vector<int>ans(n,-1),res(2,0);
        for(int i=0;i<n;i++)
        {
           for(int j=(arr[i].dead)-1; j>=0; j--)
           {
               if(ans[j]==-1)
               {
                   ans[j]=arr[i].id;
                   res[0]++;
                   res[1]+=arr[i].profit;
                   break;
               }
           }
        }
        return res;
    } 
};
