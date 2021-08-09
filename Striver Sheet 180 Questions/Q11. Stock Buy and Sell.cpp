/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
*/

/*
My Approach
--------------
             > set profit to zero  and min element as max it
             > then iterate through the array and check if any element is less than the current element set that as min element
             > check for profit if we are getting more profit than the current then set that as the new profit
             > ones the iteration is done return the profit
*/
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
