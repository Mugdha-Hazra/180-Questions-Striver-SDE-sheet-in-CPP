/*
56. Merge Intervals
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
and return an array of the non-overlapping intervals that cover all the intervals in the input.


Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 

Constraints:

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104
*/
/*
My Approach
-------------

*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        if(intervals.size()==0)
            return ans;
        int f=intervals[0][0];
        int s=intervals[0][1];
        for(int i=0;i<intervals.size();i++)
        {
            int fn=intervals[i][0];
            int sn=intervals[i][1];
            if(fn<=s)
            {
                s=max(s,sn);
            }
            else{
                ans.push_back({f,s});
                s=sn;
                f=fn;
            }
        }
        ans.push_back({f,s});
        return ans;
    }
};
