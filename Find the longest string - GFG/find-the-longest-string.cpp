//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
       // set to store all strings in the vector
	unordered_set<string> set;
	for (int i = 0; i < words.size(); i++)
		set.insert(words[i]);

	// sort the vector in lexicographic order
	sort(words.begin(), words.end());

	// find the longest string which is lexicographically smallest 
	// and also all of its prefix strings are already present in the array
	string res = "";
	for (int i = 0; i < words.size(); i++)
	{
		string str = words[i];
		bool prefixFound = true;

		// check if all prefixes of str are present in the set
		for (int j = 1; j < str.length(); j++)
		{
			if (set.find(str.substr(0, j)) == set.end())
			{
				prefixFound = false;
				break;
			}
		}

		// update the result if prefixFound is true and str is lexicographically smaller
		if (prefixFound && (str.length() > res.length() || 
							(str.length() == res.length() && str < res)))
			res = str;
	}

	return res;
} // code here
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends