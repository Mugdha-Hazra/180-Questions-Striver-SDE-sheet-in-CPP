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

step1. we'll take a vector of vector that is a matrix of 2 columns(for starting point and ending point) and n rows name it intervals and sort it.
step2. we'll make another vector of vectors for storing the resultant non overlapping intervals and name it ans.
step3. now we'll check the size of interval matrix if it is zero the we'll return the ans matrix.
step4. now we will make 2 variables 
        1) f which we assing to the starting point of the interval 
        2) s for ending point of the same interval
step5.Now we'll iterate through all the elements and make two new var for storing current starting points (fn) and ending point(sn) of the interval and each time we'll check
        1) if the current starting point is smaller than the s (that is if(fn<=s))
           then we'll check the second point and set the s accordingly
        2)else if the fn>s
            then we'll put the f and s to the ans matrix and set s and f with the new valuees
step6. at the end we'll put the final values to the ans matrix and return the ans matrix. 

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
