//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        multiset<int> s(hand.begin(),hand.end());
        while(s.size()>0)
        {
            int x = *s.begin();
            for(int i=x;i<x+groupSize;i++)
            {
                if(s.find(i)==s.end())
                    return false;
                s.erase(s.find(i));
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends