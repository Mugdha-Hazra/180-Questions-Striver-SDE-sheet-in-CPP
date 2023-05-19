//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> kthSmallestNum(int n, vector<vector<int>> &range, int q, vector<int> queries)
    {

        // sort range on the basis of start
        sort(range.begin(), range.end());

        // finding out missing elements to find out skip and
        // finding count of unique elements in each interval to find out konsa element konse interval ko belong karega
        vector<int> skip(n, 0), count(n, 0);

        if (range[0][0] > 1)
            skip[0] = range[0][0] - 1;

        count[0] = range[0][1] - range[0][0] + 1;

        for (int i = 1; i < n; i++)
        {
            int gap = range[i][0] - range[i - 1][1] - 1;
            skip[i] = skip[i - 1] + max(0, gap);

            count[i] = count[i - 1];

            // check for overlap
            if (range[i - 1][1] >= range[i][0])
            {
                count[i] += (range[i][1] - range[i - 1][1] + 1);
            }
            else
            {
                count[i] += (range[i][1] - range[i][0] + 1);
            }
        }

        // to serve each query find out the interval in which the kth element will lie
        vector<int> ans(q, -1);

        for (int i = 0; i < q; i++)
        {
            int idx = -1;

            // find interval jisme ith element pad raha haii if it exixits
            for (int j = 0; j < n; j++)
            {
                if (queries[i] <= count[j])
                {
                    idx = j;
                    break;
                }
            }
            
            // if exists find targetValue
            if (idx != -1)
            {
                ans[i] = (skip[idx] + queries[i]);
            }
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends