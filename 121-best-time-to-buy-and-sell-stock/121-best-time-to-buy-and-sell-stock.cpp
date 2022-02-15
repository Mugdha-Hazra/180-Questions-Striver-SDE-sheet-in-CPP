class Solution {
public:
    int maxProfit(vector<int>& arr) 
    {
      int profit= 0;
        int minEl= INT_MAX;
        int n= arr.size();
        
        for(int i=0;i<n;i++){
             minEl= min(minEl,arr[i]);
             profit= max(profit, arr[i]-minEl);
        }
        return profit;
    }
};