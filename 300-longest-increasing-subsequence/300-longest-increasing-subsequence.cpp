class Solution {
public:
    int lengthOfLIS(vector<int>& A) {
        int len = 0;
        for(auto cur : A) 
            if(len == 0 || A[len-1] < cur) A[len++] = cur;             // extend
            else *lower_bound(begin(A), begin(A) + len, cur) = cur;    // replace
        return len;
    }
};