class Solution {
public:
    int findKthLargest(vector<int>& s, int k) {
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<s.size()-i-1;j++)
            {
                if(s[j]>s[j+1])
                    swap(s[j],s[j+1]);
            }
            
        }
        return s[s.size()-k];
    }
};